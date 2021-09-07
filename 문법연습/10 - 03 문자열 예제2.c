#include<stdio.h>

void main(void)
{
	//str뒤 대괄호에 숫자를 넣어주지 않으면 자동으로 넣어줌.

	char str[] = "Hello World";
	printf("%d\n", sizeof(str));

	//문자열의 갯수를 세지 않고 널문자 여부만을 확인 **훨씬 더 효율적
	for (int i = 0; str[i] != '\0' ; i++)
		printf("%c", str[i]);
}