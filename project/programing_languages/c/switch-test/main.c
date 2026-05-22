#include <stdio.h>

int main(){
    int train = 2;
    int winnings = 10;
    
    switch(train){
        case 37:
            winnings = winnings + 50;
            break;
        case 65:
            puts("jaxkpot!1");
            winnings = winnings + 80;
            break;
        case 12:
            winnings = winnings +20;
            break;
        default:
            winnings = 0;
            break;
    }

    printf("train value is %d, winnings are %d\n", train, winnings);

    return 0;
}