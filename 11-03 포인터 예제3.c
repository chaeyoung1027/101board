#include<stdio.h>

void main(void)
{
	int num1 = 3, num2 = 30;
	printf("num1�ȿ� ����ִ� �� %d\n", num1);
	printf("num2�ȿ� ����ִ� �� %d\n\n", num2);
	

	//ptr�� num1�� ����Ŵ(int* ptr = &num1;
	int* ptr = &num1;

	*ptr = 4; //ptr�� ����Ű�� �ִ� ����� ���� �ٲٰڴٴ� �� ptr�� num2�� Ű��Ŵ(int ptr &num1;)
	ptr = &num2;
	*ptr = 40;

}