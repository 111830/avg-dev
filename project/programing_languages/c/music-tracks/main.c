#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my heart in Harvard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima",
};

int main(int argc, char *argv[])
{
    // Give a tracks list
    // Ask the user which track she is looking for
    // Get the input and use it to search through all tracker
    // -> loops?
    // Display any matches. (when input exist occurs within the track string)
    // -> hint : strstr() maybe?

    char input[80];

    printf("What is your song? \n");
    scanf("%s", input);


    for(int i = 0; i < 5; i++){
        char* curr_tracks = tracks[i];

        // Use strstr() to check if input accurse in curr_tracks
        char* occurrence = strstr(curr_tracks, input);

        if(occurrence != NULL){
            printf("%s\n", curr_tracks);
        }
    }

    return 0;
}