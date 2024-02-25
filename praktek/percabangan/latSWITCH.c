#include <stdio.h>

int main(){
    int laguFav;

    printf("\n1.on my way\n 2.lucid dream\n 3.harleys in hawaii\n 4.kill bill\n Pilih lagu favorite anda :");
    scanf("%d", &laguFav);

    switch(laguFav){
        case 1: printf("on my way");
            break;
        case 2: printf("lucid dream");
            break;
        case 3: printf("harleys in hawaii");
            break;
        case 4: printf("kill bill");
            break;
        default: 
        printf("pilihan anda tidak ada");
    }

    return 0;
}