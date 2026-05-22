#include <stdio.h>

int main(int argc, char* argv[]){
    printf("Sizeof int: %li\n", sizeof(int));
    printf("Sizeof long int: %li\n", sizeof(long int));
    printf("Sizeof char: %li\n", sizeof(char));
    printf("Sizeof float: %li\n", sizeof(float));
    printf("Sizeof double: %li\n", sizeof(double));
    printf("Sizeof short: %li\n", sizeof(short));
    printf("Sizeof this string \"hello hello\" with the null characer: %li\n", sizeof("hello hello"));

    return 0;
}