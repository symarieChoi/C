#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    FILE *p_file = fopen("tipssoft1.txt", "r");
    if (NULL != p_file)
    {
        fscanf(p_file, "%d %d %d", &num1, &num2, &num3); // 텍스트 파일의 첫 줄에 있는 3개의 숫자 값 변수에 저장하기
        printf("%d %d %d", num1, num2, num3);
        fclose(p_file);
    }
}