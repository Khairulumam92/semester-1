#include <stdio.h>

int main(){

    int bulan;

    printf("Pilih bulan anda :");
    scanf("%d",&bulan);

    switch(bulan){
        case 1: printf("Januari");
        break;
        case 2: printf("Februari");
        break;
        case 3: printf("Maret");
        break;
        case 4: printf("April");
        default: printf("Angka yang anda masukka salah!");
    }


    return 0;
}