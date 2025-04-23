#include <stdio.h>

int ArrayToInteger(char string[])
{
    int count = 0, num = 0;

    while (string[count] != 0)
    {
        num = num * 10 + (string[count] - '0');
        count++;
    }

    return num;
}

void main()
{
    int first_num, second_num;
    char first_string[16], second_string[16];

    printf("input first number: ");
    gets(first_string);
    printf("input second number: ");
    gets(second_string);

    first_num = ArrayToInteger(first_string);
    second_num = ArrayToInteger(second_string);

    printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}