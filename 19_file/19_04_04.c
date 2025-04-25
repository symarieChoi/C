#include <stdio.h>

int main(void)
{
    char temp[64];
    FILE *p_file = fopen("tipssoft2.txt", "rt");

    if (NULL != p_file)
    {
        while (EOF != fscanf(p_file, "%s", temp))
        {
            printf("%s\n", temp);
        }
    }

    fclose(p_file);
    return 0;
}