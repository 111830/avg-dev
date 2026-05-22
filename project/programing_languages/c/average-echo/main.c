#include <stdio.h>

int main(int argc, char* argv[]){
    if (argc < 2){
        printf("\n");

        return 0;
    }

    for(int arg_index = 1 ; arg_index < argc; arg_index++){
        char *value = argv[arg_index];

        // if arg_index is 1 less than argc 
        // don't want to print a trailing space
        // else
        // print a trailing space
        printf("%s ", value);

        if (arg_index != argc - 1){
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}