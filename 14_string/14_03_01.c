#include <stdio.h>

void main()
{
    int pos_num = 100; // 각 자릿수에 곱할 숫자
    int num = 0;       // 정수로 변환될 숫자 저장 변수
    int i, temp_num;
    char num_string[4] = "123";

    for (i = 0; i < 3; i++)
    {
        temp_num = num_string[i] - '0';
        num += temp_num * pos_num;
        pos_num /= 10;
    }

    printf(" %s -> %d\n", num_string, num);
}