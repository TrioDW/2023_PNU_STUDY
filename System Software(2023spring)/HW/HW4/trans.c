// 202255513 KIM DAEWOOK

#include <stdio.h>
#include "cachelab.h"

#define BlockSize1 4
#define BlockSize2 8
#define BlockSize3 16

int is_transpose(int M, int N, int A[N][M], int B[M][N]);

char transpose_submit_desc[] = "Transpose submission";
void transpose_submit(int M, int N, int A[N][M], int B[M][N]) {
    
    int BlockRow, BlockCol;
    int Row_Idx, Col_Idx;
    int tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;

    if (N == 32 && M==32) {
        for (BlockCol = 0; BlockCol < M; BlockCol += BlockSize2) {
            for (BlockRow = 0; BlockRow < N; BlockRow += BlockSize2) {
                for (Row_Idx = BlockRow; Row_Idx < BlockRow + BlockSize2; Row_Idx++) {
                    for (Col_Idx = BlockCol; Col_Idx < BlockCol + BlockSize2; Col_Idx++) {
                        if (Row_Idx != Col_Idx)
                            B[Col_Idx][Row_Idx] = A[Row_Idx][Col_Idx];
                        else {
                            tmp0 = A[Row_Idx][Col_Idx];
                            tmp1 = Row_Idx;
                        }
                    }
                    if (BlockRow == BlockCol)
                        B[tmp1][tmp1] = tmp0;
                    
                }
            }
        }
    }

    else if (N == 64 && M ==64) {
        for (BlockCol = 0; BlockCol < M; BlockCol += BlockSize2) {
            for (BlockRow = 0; BlockRow < N; BlockRow += BlockSize2) {
                for (Row_Idx = BlockRow; Row_Idx < BlockRow + BlockSize1; Row_Idx++) {
                    
                    tmp0 = A[Row_Idx][BlockCol];
                    tmp1 = A[Row_Idx][BlockCol + 1];
                    tmp2 = A[Row_Idx][BlockCol + 2];
                    tmp3 = A[Row_Idx][BlockCol + 3];
                    tmp4 = A[Row_Idx][BlockCol + 4];
                    tmp5 = A[Row_Idx][BlockCol + 5];
                    tmp6 = A[Row_Idx][BlockCol + 6];
                    tmp7 = A[Row_Idx][BlockCol + 7];

                    B[BlockCol][Row_Idx] = tmp0;
                    B[BlockCol + 1][Row_Idx] = tmp1;
                    B[BlockCol + 2][Row_Idx] = tmp2;
                    B[BlockCol + 3][Row_Idx] = tmp3;

                    B[BlockCol][Row_Idx + 4] = tmp4;
                    B[BlockCol + 1][Row_Idx + 4] = tmp5;
                    B[BlockCol + 2][Row_Idx + 4] = tmp6;
                    B[BlockCol + 3][Row_Idx + 4] = tmp7;
                }

                for (Col_Idx = BlockCol; Col_Idx < BlockCol + BlockSize1 ; Col_Idx++) {
                    
                    tmp4 = A[BlockRow + 4][Col_Idx];
                    tmp5 = A[BlockRow + 5][Col_Idx];
                    tmp6 = A[BlockRow + 6][Col_Idx];
                    tmp7 = A[BlockRow + 7][Col_Idx];

                    tmp0 = B[Col_Idx][BlockRow + 4];
                    tmp1 = B[Col_Idx][BlockRow + 5];
                    tmp2 = B[Col_Idx][BlockRow + 6];
                    tmp3 = B[Col_Idx][BlockRow + 7];

                    B[Col_Idx][BlockRow + 4] = tmp4;
                    B[Col_Idx][BlockRow + 5] = tmp5;
                    B[Col_Idx][BlockRow + 6] = tmp6;
                    B[Col_Idx][BlockRow + 7] = tmp7;

                    B[Col_Idx + 4][BlockRow] = tmp0;
                    B[Col_Idx + 4][BlockRow + 1] = tmp1;
                    B[Col_Idx + 4][BlockRow + 2] = tmp2;
                    B[Col_Idx + 4][BlockRow + 3] = tmp3;

                    B[Col_Idx + 4][BlockRow + 4] = A[BlockRow + 4][Col_Idx + 4];
                    B[Col_Idx + 4][BlockRow + 5] = A[BlockRow + 5][Col_Idx + 4];
                    B[Col_Idx + 4][BlockRow + 6] = A[BlockRow + 6][Col_Idx + 4];
                    B[Col_Idx + 4][BlockRow + 7] = A[BlockRow + 7][Col_Idx + 4];
                }
            }
        }
    }
    
    else if(N ==67 && M ==61) {
        for (BlockCol = 0; BlockCol < M; BlockCol += BlockSize3) {
            for (BlockRow = 0; BlockRow < N; BlockRow += BlockSize3) {
                for (Row_Idx = BlockRow; (Row_Idx < N) && (Row_Idx < BlockRow + BlockSize3); Row_Idx++) {
                    for (Col_Idx = BlockCol; (Col_Idx < M) && (Col_Idx < BlockCol + BlockSize3); Col_Idx++) {
                        if (Row_Idx != Col_Idx)
                            B[Col_Idx][Row_Idx] = A[Row_Idx][Col_Idx];
                        else {
                            tmp0 = A[Row_Idx][Col_Idx];
                            tmp1 = Row_Idx;
                        }
                    }
                    if (BlockRow == BlockCol)
                        B[tmp1][tmp1] = tmp0;
                }
            }
        }
    }
}

char trans_desc[] = "Simple Row_Idx-wise scan transpose";
void trans(int M, int N, int A[N][M], int B[M][N]) {
    
    int i, j, tmp;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            tmp = A[i][j];
            B[j][i] = tmp;
        }
    }
}

void registerFunctions() {
    registerTransFunction(transpose_submit, transpose_submit_desc);
    registerTransFunction(trans, trans_desc);
}

int is_transpose(int M, int N, int A[N][M], int B[M][N])
{
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; ++j) {
            if (A[i][j] != B[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}
