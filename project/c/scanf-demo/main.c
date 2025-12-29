#include <stdio.h>

int main(int argc, char *argv[])
{
    char first_name[80];
    char last_name[80];
    int age;

    /*
    If more than 79 characters are entered, the input would exceed the buffer size,
    which could cause a buffer overflow and overwrite adjacent memory.
    */
    printf("Enter the first and last name along with age.\n");
    scanf("%79s %79s %d", first_name, last_name, &age);

    printf("First: %s, Last %s, Age: %d\n", first_name, last_name, age);

    return 0;
}