#include <stdio.h>

int main(void)
{
    char temp[64];
    FILE *p_file = fopen("tipssoft2.txt", "rt");

    if (NULL != p_file)
    {
        while (NULL != fgets(temp, sizeof(temp), p_file))
        {
            printf("%s", temp); // fgets는 fscanf와 달리 줄의 끝에 있는 \n도 읽어서 배열 마지막에 넣어 줌
        }
    }

    fclose(p_file);
    return 0;
}