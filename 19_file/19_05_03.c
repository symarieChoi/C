#include <stdio.h>

int main(void)
{
    int data;
    FILE *p_file = fopen("jin.dat", "rb");

    if (NULL != p_file)
    {
        fread(&data, sizeof(int), 1, p_file);
        fclose(p_file);
        printf("file data: %d(0x%04x)\n", data, data);
    }

    return 0;
}