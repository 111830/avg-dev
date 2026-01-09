#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island{
    char *name;
    char *opens;
    char *closes;
    struct island *next;
}island;


void display(island* start){
    island* i = start;
    for (; i != NULL; i = i->next)
    {
        printf("Name:%s open: %s-%s\n", i->name,  i->opens, i->closes);
    }
    
}

int main(){
    island amity = {
        .name = "Amity",
        .opens = "09:00",
        .closes = "17:00",
        .next = NULL
    };

    island craggy = {
        .name = "Craggy",
        .opens = "09:00",
        .closes = "17:00",
        .next = NULL
    };

    island isla_nublar = {
        .name = "Isla Nublar",
        .opens =  "09:00",
        .closes = "17:00",
        .next = NULL
    };
    
    island shutter = {
        .name = "Shutter",
        .opens = "09:00",
        .closes = "17:00",
        .next = NULL
    };

    amity.next = &craggy;
    craggy.next = &isla_nublar;
    isla_nublar.next = &shutter;

    island skull = {
        .name = "Skull",
        .opens = "09:00",
        .closes = "17:00",
        .next = NULL
    };

    isla_nublar.next = &skull;
    skull.next = &shutter;

    display(&amity);
    

    return 0;
}