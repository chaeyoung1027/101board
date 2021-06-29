#include<stdio.h>

int factorial(int num) //num은 공간
{
	if (num == 1)
		return 1;
}


void main(void)//함수의 구성요소 : 함수 이름과 매개변수와 반환형
{
	int val = 1;
	int a;
	a = factorial(val); //argument
	printf("%d 팩토리얼은 %d\n", val, a);
}