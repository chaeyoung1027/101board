#include <stdio.h>

void main(void)
{
	printf("������ �Է��Ͻÿ� : ");
	int score;
	scanf("%d", &score);

	if (90 <= score & score <= 100)
	{
		printf("A");
	}
	else if (80 <= score & score <= 89)
	{
		printf("B");
	}
	else if (70 <= score  & score <= 79)
	{
		printf("C");
	}
	else if (69 >= score)
	{
		printf("D");
	}
}