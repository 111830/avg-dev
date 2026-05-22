#include <stdio.h>

int main(int argc, char* argv[]){
    FILE* fp = fopen("test.tex", "w");

    int descriptor = fileno(fp);

    fprintf(fp, "Hello, World!\n");
    printf("The descriptor number of fp: %d\n", descriptor);

    fclose(fp);

    return 0; 
}