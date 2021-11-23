#include<stdio.h>
//printf 함수를 가지고 있음.

#include<stdlib.h>
//malloc, free 함수를 가지고 있음.

void main(void)
{
	//정적할당
	int a = 3;
	int* ptr1 = &a;
	*ptr1 = 4;
	printf("%d \n", *ptr1);

	//동적할당
	int* ptr2 = (int*)malloc(sizeof(int));
	*ptr2 = 10;
	printf("%d \n", *ptr2);
	free(ptr2);

}