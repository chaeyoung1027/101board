#include <stdio.h>

void main(void)
{
	printf("씨언어 점수를 입력하시오 : ");
	int c_score;
	scanf("%d", &c_score);

	if (90 <= c_score && c_score <= 100)
	{
		printf("A");
	}
	else if (80 <= c_score && c_score <= 89)
	{
		printf("B");
	}
	else if (70 <= c_score && c_score <= 79)
	{
		printf("C");
	}
	else if (60 <= c_score && c_score < 70)
	{
		printf("D");
	}
	else printf("E");
		printf("\n");
		printf("자바 점수를 입력하시오 : ");
		int java_score;
		scanf("%d", &java_score);

		if (90 <= java_score && java_score <= 100)
		{
			printf("A");
		}
		else if (80 <= java_score && java_score <= 89)
		{
			printf("B");
		}
		else if (70 <= java_score && java_score <= 79)
		{
			printf("C");
		}
		else if (60 <= java_score && java_score < 70)
		{
			printf("D");
		}
		else printf("E");
		printf("\n");
			printf("컴퓨터구조 점수를 입력하시오 : ");
			int ca_score;
			scanf("%d", &ca_score);

			if (90 <= ca_score && ca_score <= 100)
			{
				printf("A");
			}
			else if (80 <= ca_score && ca_score <= 89)
			{
				printf("B");
			}
			else if (70 <= ca_score && ca_score <= 79)
			{
				printf("C");
			}
			else if (60 <= ca_score && ca_score<70)
			{
				printf("D");
			}
			else printf("E");
			printf("\n");
}