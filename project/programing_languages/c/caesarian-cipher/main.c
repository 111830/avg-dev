/*
*Our program will:
* 1. Ask for a character from the user
* 2. Take that character and shift by some amount 
* 3. Print the result
*/

#include <stdio.h>

int main(){
    int shift = 2;

    char message[] = "Please input a letter from a to z.\n";
    printf("%s", message);

    char input;
    scanf("%c", &input);

    if(input < 'a' || input > 'z'){
        printf("Please input a character between a and z (lower case)\n");
        return 1;
    }

    char result = input + shift;

    printf("%c\n", result);
    
    return 0;
}