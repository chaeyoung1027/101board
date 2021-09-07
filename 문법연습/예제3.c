#include <stdio.h>

void main(void)
{
    char str[20] = "Hello World";
    printf("%d\n", sizeof(str));

    str[7] = '\0';
    printf("%s", str);
}