#include<stdio.h>

void main(void)
{
	int num1 = 3, num2 = 30;
	printf("num1안에 들어있는 값 %d\n", num1);
	printf("num2안에 들어있는 값 %d\n\n", num2);
	

	//ptr이 num1을 가리킴(int* ptr = &num1;
	int* ptr = &num1;

	*ptr = 4; //ptr이 가르키고 있는 대상의 값을 바꾸겠다는 뜻 ptr이 num2를 키리킴(int ptr &num1;)
	ptr = &num2;
	*ptr = 40;

}