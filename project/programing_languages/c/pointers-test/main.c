#include <stdio.h>

int main(int argc, char* argv[]){
    // %p vs %d
    int x = 1337;

    int *a = &x;
    //long int b = &x;

    printf("The address of x as a base 16 numbers %p\n", &x);
    printf("The address of a as a base 16 numbers %p\n", a);
    printf("The address of a as a base 10 numbers %ld\n", a);
    //printf("The number %ld\n", b);

    // Print what is inside a
    printf("The value inside a is: %d\n", *a);

    int *c = a;
    printf("The address of a is: %p\n", a);
    printf("The address of c is: %p\n", c);
    printf("The value at a is: %d, and the value at c is %d\n", *a, *c);

    x = 5;
    printf("The value at a is: %d\n", x);
    printf("The value at a is: %d, and the value at c is %d\n", *a, *c);

    *a = 78;
    printf("The value at a is: %d\n", x);
    printf("The value at a is: %d\n", *a);
    printf("The value at a is: %d\n", *c);

    return 0;
}