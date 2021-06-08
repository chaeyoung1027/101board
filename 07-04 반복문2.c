#include <stdio.h>

void main(void)
{
	int sum = 0;
	for (int num = 1; num <= 10; ++num)
	{
		sum += num;//sum=sum+num;과 같은 식
	}
	printf("%d\n",sum);
}
