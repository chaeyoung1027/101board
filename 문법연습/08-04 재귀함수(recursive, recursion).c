#include<stdio.h>

int factorial(int num) //num�� ����
{
	if (num == 1)
		return 1;
}


void main(void)//�Լ��� ������� : �Լ� �̸��� �Ű������� ��ȯ��
{
	int val = 1;
	int a;
	a = factorial(val); //argument
	printf("%d ���丮���� %d\n", val, a);
}