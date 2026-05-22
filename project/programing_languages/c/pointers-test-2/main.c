#include <stdio.h>

int main(int args, char* argv[]){
    // char my_string[4] = {'a', 'b', 'c', '\0'};
    char my_string[4] = "abc";

    printf("%s\n", my_string);
    printf("%c\n", my_string[0]);

    printf("%p\n", &my_string);
    printf("%p, %c\n", &my_string[0], my_string[0]);
    printf("%p, %c\n", &my_string[1], my_string[1]);
    printf("%p, %c\n", &my_string[2], my_string[2]);
    printf("%p, %c\n", &my_string[3], my_string[3]);

    long int length = &my_string[3] - &my_string[0] + 1;
    printf("Length of the string: %ld\n", length);

    char *my_string_2 = "def";
    printf("%s\n", my_string_2);
    printf("%p, %c\n", my_string_2, *my_string_2);
    printf("%p\n", &my_string_2);
    printf("%p, %c\n", my_string_2 + 1, *(my_string_2 + 1));
    printf("%p, %c\n", my_string_2 + 2, *(my_string_2 + 2));
    printf("%p, %c\n", my_string_2 + 3, *(my_string_2 + 3));

    // TODO: Why doesen't this work?
    *(my_string_2 + 2) = 'x';
    /* Because we are in read-only storage (Code Segment).
     * We cannot write or modify here, only read. This is the main reason
     * we see a Segmentation Fault (core dumped).
     * To fix this, we can modify the code above:
     * From: char *my_string_2 = "def"; 
     * To:   char value[] = "def"; and then char *my_string_2 = value;
     * Now "def" is in the Stack and we can modify it.
    */

    int offset = 0;
    while (*(my_string_2 + offset) != '\0')
    {
        printf("Offset: %d\n", offset);
        printf("The current character: %c\n", *(my_string_2 + offset));
        offset++;
    }
    

    return 0;
}