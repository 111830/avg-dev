#include <stdio.h>

void increment(int *j)
{
    *j = *j + 1;
}

int main(int argc, char *argv[])
{
    int x = 3;

    increment(&x);

    printf("%d\n", x);

    /* This one works

    int *u;
    printf("%p\n", u);

    int z = 89;
    u = &z;

    printf("%d\n", *u);

    */

    /*
    * Wild Pointer / Uninitialized Memory Risk:
    * Declaring 'int *u;' without a value leaves it with garbage data from the stack, not empty.
    * If the stack holds an old valid address, it leads to silent memory corruption.
    * If the stack holds invalid data (like 0), it causes a Segmentation Fault.
    * Always initialize pointers to NULL.
    **/

    int *u;
    printf("%p\n", u);
    *u = 89;
    printf("%d\n", *u);

    /* This one doesn't work!!!
    int *u = NULL;
    printf("%p\n", u);
    *u = 89;
    printf("%d\n", *u);
    */

    return 0;
}