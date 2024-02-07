#include <stdio.h>

void static_sum(int end);

int main()
{
	int i;

	for (i=0; i<10; i++)
		static_sum(i);

	return 0;
}

// ������ ������ �հ迡 ���� ȣ��� �������� ���� ��� �����ϱ�
void static_sum(int end)
{
	static int sum = 0;
	printf("%2d��° ȣ��, sum = %3d + 1~%2d�� ��: ", end+1, sum, end+1);

	for (int i = 1; i < end+2; i++)
        sum += i;

	printf("%3d\n", sum);
}
