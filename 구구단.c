#include<stdio.h>//ctrl k -> ctrl c =>주석달기 ctrl k -> ctrl u =>주석풀기

void main(void)
{
	for (int dan = 2; dan <= 9; dan++)
	{
		if (dan == 4)
			continue; // 바깥쪽 for문에 대한 continue(4단만 skip)
		for (int i = 1; i<= 9; i++) 
		{
			if (i == 5)
				continue; //안쪽 for문에 대한 continue(수 5를 skip)
			printf("%d X %d = %d\n", dan, i, dan * i);
		}
		printf("\n");
	}
}


/*while문으로*/
/*#include<stdio.h>
void main(void)
{
	int dan = 2
	while(dan <= 3)
	{
	int i = 1;
	while(i <= 9)
	{
		printf("%d X %d = %d \n", dan, i, dan * i);
		i++;
	}
	dan++;
	}
}
*/