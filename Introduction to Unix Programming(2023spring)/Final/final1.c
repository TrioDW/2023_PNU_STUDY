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
	// 작성하기 
}
