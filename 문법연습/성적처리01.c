#include <stdio.h>

void cal_grade(int score);
float average(int a, int b, int c);

void main(void)
{
	float avg;
	int C_score;
	printf("����� ������ �Է��Ͻÿ� : ");
	scanf("%d", &C_score);
	cal_grade(C_score);

	int java_score;
	printf("�ڹ� ������ �Է��Ͻÿ� : ");
	scanf("%d", &java_score);
	cal_grade(java_score);

	int CA_score;
	printf("��ǻ�ͱ��� ������ �Է��Ͻÿ� : ");
	scanf("%d", &CA_score);
	cal_grade(CA_score);

	avg = average(C_score, java_score, CA_score);
}

//�� ������ ����� ��ȯ
float average(int a, int b, int c)
{
	return (float)(a + b + c) / 3.f;
}