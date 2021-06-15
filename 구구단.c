#include<stdio.h>//ctrl k -> ctrl c =>주석달기

void main(void)
{
	for (int dan = 2; dan <= 9; dan++)
	{
		if (dan == 4)
		{
			break; // 바깥쪽 for문에 대한 break
		}
		for (int i = 1; i<= 9; i++) 
		{
			if (i == 4)
			{
				break; //안쪽 for문에 대한 break
			}
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