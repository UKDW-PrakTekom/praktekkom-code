#include <stdio.h>

void main(void)
{
    char *s = "HI!";
    printf("%s\n", s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
}