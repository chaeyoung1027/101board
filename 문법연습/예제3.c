#include <stdio.h>

void main(void)
{
    char str[20] = "Hello World";
    printf("%d\n", sizeof(str));

    for (int i = 0; i < 7; i++)
        printf("%c", str[i]);
}