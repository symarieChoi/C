#include <stdio.h>

void main()
{
    unsigned char limit_table[3] = {4, 2, 3};
    unsigned char count[3][4];
    int age, member, temp, sum;

    for (age = 0; age < 3; age++)
    {
        printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age + 2);

        for (member = 0; member < limit_table[age]; member++)
        {
            printf("%dth: ", member + 1);

            scanf("%d", &temp);
            count[age][member] = (unsigned char)temp;
        }

        printf("\n\n연령별 평균 윗몸 일으키기 횟수\n");

        for (age = 0; age < 3; age++)
        {
            sum = 0;

            printf("%d0대: ", age + 2);

            for (member = 0; member < limit_table[age]; member++)
            {
                sum = sum + count[age][member];
            }
            printf("%5.2f\n", (double)sum / limit_table[age]);
        }
    }
}