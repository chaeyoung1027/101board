#include<stdio.h>

void main(void)
{
	int arr[4];
	printf("arr 0��° ������ �ּ� : %p \n", &arr[0]);
	printf("arr �迭�� ���� �ּ� : %p \n", arr);
	printf("arr 1��° ������ �ּ� : %p \n\n", &arr[1]);
	char str[4];
	printf("str 0��° ������ �ּ� : %p \n", &str[0]);
	printf("str �迭�� ���� �ּ� : %p \n", str);
	printf("str 1��° ������ �ּ� : %p \n", &str[1]);
}