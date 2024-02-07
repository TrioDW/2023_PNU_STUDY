#include <stdio.h>
#include <string.h>

#define N 10

typedef struct Student {
    char name[10];
    char phone[14];
    double grade;
} STUD;

int main()
{
    STUD student[N] = {{"홍길동", "010-5210-1234", 4.2}, {"이몽룡", "010-523-1628", 4.0}, {"성춘향", "010-1235-8765", 3.2}, {"제갈공명", "010-345-1676", 4.4}, {"주몽", "010-5210-5463", 3.7},
                    {"배장화", "010-523-7979", 2.9}, {"배홍련", "010-5210-1472", 4.0}, {"홍길동", "010-8255-8255", 3.8}, {"연홍부", "010-516-3483", 3.2}, {"연놀부", "010-8282-8282", 2.7}};


	char who[9];
	int cnt, i;

	printf("정보를 찾고 싶은 학생 이름은? ");
	scanf("%s", who);

	printf("\n\n");
	printf("====================================\n");
	printf("  이름        전화번호       평점   \n");
	printf("====================================\n");

	cnt = 0;
	for (i=0; i<N; i++)
	{
		if (strcmp(who, student[i].name) == 0)
		{
			cnt++;
			printf(" %-10s %-14s %5.1f \n", student[i].name, student[i].phone, student[i].grade);
		}
	}
	printf("====================================\n");

	if (cnt == 0)
		printf(" %s(이)라는 학생은 없습니다. \n", who);
	else
		printf("총 %d명의 학생을 찾았습니다. \n", cnt);

	return 0;
}
