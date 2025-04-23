#include <stdio.h>
#include <stdlib.h>

void main()
{
    // 연령별 인원수를 저장할 포인터 - 사용자에게 입력받음
    unsigned char *p_limit_table;
    // 연령별 윗몸 일으키기 횟수를 저장할 2차원 포인터
    unsigned char **p;
    int age, age_step, member, temp, sum;

    printf("20대부터 시작해서 연령층이 몇 개인가요: ");
    scanf("%d", &age_step);

    // 연령별 인원수를 저장할 메모리를 만듦
    p_limit_table = (unsigned char *)malloc(age_step);
    p = (unsigned char **)malloc(sizeof(unsigned char *) * age_step);

    // 연령별로 윗몸 일으키기 횟수를 입력 받음
    for (age = 0; age < age_step; age++)
    {
        // 각 연령의 윗몸 일으키기 횟수
        printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age + 2);
        printf("이 연령대는 몇 명입니까?: ");

        // 해당 연령에 소속된 인원수를 입력 받음
        scanf("%d", &temp);
        *(p_limit_table + age) = (unsigned char)temp;

        // 입력 받은 인원수만큼 메모리를 할당함
        *(p + age) = (unsigned char *)malloc(*(p_limit_table + age));

        // 해당 연령에 소속된 직원들을 순서대로 입력 받음
        for (member = 0; member < *(p_limit_table + age); member++)
        {
            printf("%dth: ", member + 1);

            // 윗몸 일으키기 횟수를 정수로 입력 받음
            scanf("%d", &temp);
            *(*(p + age) + member) = (unsigned char)temp;
        }
    }

    printf("\n\n 연령별 평균 윗몸 일으키기 횟수\n");
    for (age = 0; age < age_step; age++)
    {
        sum = 0;

        printf("%d0대: ", age + 2);

        for (member = 0; member < *(p_limit_table + age); member++)
        {
            sum = sum + *(*(p + age) + member);
        }

        printf("%5.2f\n", (double)sum / *(p_limit_table + age));

        free(*(p + age));
    }

    free(p);
    free(p_limit_table);
}