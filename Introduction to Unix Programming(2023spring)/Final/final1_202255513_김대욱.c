#include <stdio.h>

void static_sum(int end);

int main()
{
	int i;

	for (i=0; i<10; i++)
		static_sum(i);

	return 0;
}

// 이전에 누적된 합계에 새로 호출된 값까지의 합을 계속 누적하기
void static_sum(int end)
{
	static int sum = 0;
	printf("%2d번째 호출, sum = %3d + 1~%2d의 합: ", end+1, sum, end+1);

	for (int i = 1; i < end+2; i++)
        sum += i;

	printf("%3d\n", sum);
}
