#include<stdio.h>

void main(void)
{
	//str�� ���ȣ�� ���ڸ� �־����� ������ �ڵ����� �־���.

	char str[] = "Hello World";
	printf("%d\n", sizeof(str));

	//���ڿ��� ������ ���� �ʰ� �ι��� ���θ��� Ȯ�� **�ξ� �� ȿ����
	for (int i = 0; str[i] != '\0' ; i++)
		printf("%c", str[i]);
}