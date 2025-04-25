#include <stdio.h>

int main(void)
{
    FILE *p_file = fopen("tipssoft.txt", "wt");

    if (NULL != p_file)
    {
        fprintf(p_file, "Hello\n");
        fclose(p_file);
    }

    return 0;
}