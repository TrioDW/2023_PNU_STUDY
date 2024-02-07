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
    STUD student[N] = {{"ȫ�浿", "010-5210-1234", 4.2}, {"�̸���", "010-523-1628", 4.0}, {"������", "010-1235-8765", 3.2}, {"��������", "010-345-1676", 4.4}, {"�ָ�", "010-5210-5463", 3.7},
                    {"����ȭ", "010-523-7979", 2.9}, {"��ȫ��", "010-5210-1472", 4.0}, {"ȫ�浿", "010-8255-8255", 3.8}, {"��ȫ��", "010-516-3483", 3.2}, {"�����", "010-8282-8282", 2.7}};


	char who[9];
	int cnt, i;

	printf("������ ã�� ���� �л� �̸���? ");
	scanf("%s", who);

	printf("\n\n");
	printf("====================================\n");
	printf("  �̸�        ��ȭ��ȣ       ����   \n");
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
		printf(" %s(��)��� �л��� �����ϴ�. \n", who);
	else
		printf("�� %d���� �л��� ã�ҽ��ϴ�. \n", cnt);

	return 0;
}
