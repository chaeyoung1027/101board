#include<stdio.h>

void main(void)
{
	char str[20] = "Hello World";

	//�ܼ��ϰ� �ε��� ���� ���� �����
	for (int i = 0; i < sizeof(str); i++)
		printf("%c", str[i]);
}