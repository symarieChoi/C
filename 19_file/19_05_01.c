#include <stdio.h>

int main(void) {
    int data = 0x00000412;
    FILE *p_file = fopen("jin.dat", "wb");

    if(NULL!=p_file){
        fwrite(&data, sizeof(int), 1, p_file);
        fclose(p_file);
    }

    return 0;
}