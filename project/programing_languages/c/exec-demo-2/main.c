#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char** argv){
    if(execl("/sbin/ifconfig", "/sbin/ifconfig", NULL) == -1){
        // This code will never run if /sbin/ifconfig is successful
        if(execlp("ipconfig", "ipconfig", NULL) == -1){
            // This code will never run if /usr/sbin/ip a is successful
            fprintf(stderr, "Cannot run ipconfig: %s", strerror(errno));
            return 1;
        }
    }
    
    return 0;
}

