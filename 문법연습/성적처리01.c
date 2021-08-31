#include <stdio.h>

void cal_grade(int score);
float average(int a, int b, int c);

void main(void)
{
	float avg;
	int C_score;
	printf("씨언어 점수를 입력하시오 : ");
	scanf("%d", &C_score);
	cal_grade(C_score);

	int java_score;
	printf("자바 점수를 입력하시오 : ");
	scanf("%d", &java_score);
	cal_grade(java_score);

	int CA_score;
	printf("컴퓨터구조 점수를 입력하시오 : ");
	scanf("%d", &CA_score);
	cal_grade(CA_score);

	avg = average(C_score, java_score, CA_score);
}

//세 점수의 평균을 반환
float average(int a, int b, int c)
{
	return (float)(a + b + c) / 3.f;
}