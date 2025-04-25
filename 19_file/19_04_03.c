#include <stdio.h>

int main(void)
{
    int num;
    FILE *p_file = fopen("tipssoft1.txt", "r");

    if (NULL != p_file)
    { // 파일 열기에 성공한 경우
        while (EOF != fscanf(p_file, "%d", &num)) // 텍스트 파일의 끝은 EOF 문자로 구별하며 fscanf 함수가 EOF 문자를 만나면 EOF 값을 반환함
        {
            printf("%d\n", num);
        }
    }

    fclose(p_file);
    return 0;
}