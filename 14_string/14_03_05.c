#include <stdio.h>
#include <stdlib.h>

void main()
{
    int first_num, second_num;
    char first_string[16], second_string[16];

    printf("first number: ");
    gets(first_string);
    printf("second_number: ");
    gets(second_string);

    first_num = atoi(first_string);
    second_num = atoi(second_string);

    printf("%d + %d = %d", first_num, second_num, first_num + second_num);
}