#include <stdio.h>

int main()
{
    char s[] = "Shatner";

    printf("%s\n", s);
    printf("[%c]\n", s[0]);
    printf("[%c]\n", s[1]);
    printf("[%c]\n", s[6]);
    printf("[%c]\n", s[7]);

    s[0] = 'S';
    printf("%s\n", s);

    s[0] = 'H';
    printf("%s\n", s);

    /* This line can access other places in memory and can sometimes say nothing if the byte is null or 0,
     * or it can access other values, interpret them into a string, and show them to us.
     * But if we try to change the address space just a little bit (like 8992 in my case),
     * we see a "Segmentation fault (core dumped)" in the terminal.
     * This tells us "you can't access other places in memory because the maximum address space
     * I let you use is 8991". This is a safeguard created by the OS to protect other programs
     * so we don't write over or catch their code and data.
     */

    printf("At index 8991: [%c]\n", s[8991]);

    s[7] = 'a';

    printf("The string after replacing NULL character: [%s]\n", s);

    s[4] = '\0';

    printf("%s\n", s);

    return 0;
}