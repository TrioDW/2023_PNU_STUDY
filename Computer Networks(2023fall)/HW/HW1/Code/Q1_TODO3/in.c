// [TODO 3] 다섯 번 scanf를 실행하여 int형 정수 5개를 읽고 총합을 출력하는 in.c 프로그램을 작성하세요:
// printf(“SUM: %d\n”, sum); 프로그램을 실행하면, 터미널에서 5개의 숫자를 입력해야 합니다. 
// 소스코드를 수정하지 않고, data.txt 파일의 내용을 scanf의 입력으로 전달하려면, 터미널에서 어떤 명령을 
// 입력해야 하나요? 직접 실행하고, 터미널 화면(입력한 명령어가 보이도록 화면 캡처 + 총합이 출력된 화면)을 
// 아래에 첨부하세요.

#include <stdio.h>

int main() {

    int sum = 0;
    int temp = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &temp);
        sum += temp;
    }

    printf("SUM: %d\n", sum);

    return 0;
}