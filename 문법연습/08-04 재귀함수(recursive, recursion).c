#include<stdio.h>

int factorial(int num) //num�� ����
{
	if (num == 1)
		return 1;
	return num * factorial(num - 1);
}


void main(void)//�Լ��� ������� : �Լ� �̸��� �Ű������� ��ȯ��
{
	int val = 3;
	a = factorial(val); //argument
	printf("%d ���丮���� %d\n", val, a);
}