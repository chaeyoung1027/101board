#include<stdio.h>
//printf �Լ��� ������ ����.

#include<stdlib.h>
//malloc, free �Լ��� ������ ����.

void main(void)
{
	//�����Ҵ�
	int a = 3;
	int* ptr1 = &a;
	*ptr1 = 4;
	printf("%d \n", *ptr1);

	//�����Ҵ�
	int* ptr2 = (int*)malloc(sizeof(int));
	*ptr2 = 10;
	printf("%d \n", *ptr2);
	free(ptr2);

}