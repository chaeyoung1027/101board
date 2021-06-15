#include<stdio.h>

void main(void)
{
	for (int dan = 2; dan <= 9; dan++)
	{
		for (int i = 1; i<= 9; i++) 
		{
			printf("%d X %d = %d\n", dan, i, dan * i);
		}
		printf("\n");
	}
}


/*while¹®À¸·Î*/
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