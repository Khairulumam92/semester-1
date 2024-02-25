#include <stdio.h>

int main(){
    int nilai;

    printf("masukkan nilai anda : " );
    scanf("%d",&nilai);

    if(nilai >= 81 && nilai <= 100){
        printf("Nilai anda adalah A" );
    }else if(nilai >= 71 && nilai <= 80){
        printf("Nilai anda adalah B" );
    }else if(nilai >= 61 && nilai <= 70){
        printf("Nilai anda adalah C" );
    }else {
        printf("anda tidak lulus" );
    }
}