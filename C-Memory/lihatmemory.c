#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void main()
{
    char c = 'H';
    int speedLimit = 65;
    char surename[] = "Lloyd";

    printf("Alamat variable c = %p\n", &c);
    printf("Alamat variable speedLimit = %p\n", &speedLimit);
    printf("Alamat variable surename = %p\n", &surename);

    printf("%p\n", &surename);
    printf("%p\n", &surename[0]);
    printf("%p\n", &surename[1]);
    printf("%p\n", &surename[2]);
    printf("%p\n", &surename[3]);



}