#include<stdio.h>

int A = 3;

void changeA(void);
void main(void) {
	printf("�ٲٱ� �� %d \n", A);
	changeA();
	printf("�ٲٱ� �� %d", A);
	}
		
	void changeA(int A) {
		A = 5;
	}