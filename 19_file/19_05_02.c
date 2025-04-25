#include <stdio.h>

int main(void)
{
    int data = 100, data_list[5] = {0, 1, 2, 3, 4};
    FILE *p_file = fopen("tipssoft.dat", "wb");

    if (NULL != p_file)
    {
        fwrite(&data, sizeof(int), 1, p_file);
        fwrite(data_list, sizeof(int), 5, p_file);
        fclose(p_file);
    }

    return 0;
}