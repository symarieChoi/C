#include <stdio.h>
#include <string.h>

void main()
{
    int pos_num = 1; // 각 자릿수에 곱할 숫자
    int num = 0;     // 정수로 변환될 숫자 저장 변수
    int i, count;
    char num_string[4] = "123";

    count = strlen(num_string);
    for (i = 0; i < count - 1; i++)
        pos_num *= 10; // 문자열의 길이보다 1 작게 반복해야 함(1부터 반복 1회마다 10씩 증가)

    for (i = 0; i < count; i++)
    {
        num = num + (num_string[i] - '0') * pos_num;
        pos_num /= 10;
    }

    printf(" %s -> %d\n", num_string, num);
}