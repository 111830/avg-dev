#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main(int argc, char* argv[]){
    char* programName = "cattpy";

    execlp(programName, programName, "text.txt", NULL);

    // This only executes if the execle call 
    puts("The execle call failed!"); 
    /**
     * @brief Prints the current error number (errno) to standard output.
     * 
     * Displays the value of the global errno variable, which is set by system calls
     * and library functions to indicate what went wrong when an error occurs.
     * The errno value is an integer that corresponds to specific error conditions.
     * 
     * @note errno is typically set to 0 on program start and is only meaningful
     *       after a function call indicates an error occurred.
     * 
     * @see perror() for a more user-friendly way to display error messages
     * @see strerror() to convert errno to a human-readable error string
     */
    printf("The errno is: %i\n", errno);
    printf("Error message: %s\n", strerror(errno));



    return 0;
}