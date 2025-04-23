#include <stdio.h>

void main()
{
    int num = 0;

    while (1)
    {
        printf("input age: ");
        scanf("%d", &num);

        if (num > 0 && num <= 130)
        {
            break;
        }
        else
        {
            printf("Incorrect Age!! \n");
        }
    }
    printf("your age: %d \n", num);
}