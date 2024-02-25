#include <stdio.h>

int main(){
    int nilai;

    printf("masukkan nilai :");
    scanf("%d",&nilai);

    if (nilai >= 80 && nilai <= 100){ //logika "&& nilai <= 100" dignakan untuk membatasi nilai supaya tidak lebih dari 100
        printf("Nilai adalah A");
    } else if(nilai >= 71 && nilai <= 80){
        printf("Nilai anda B");
    }else if(nilai >= 61 && nilai  <= 70){
        printf("Nilai anda C");
    }else {
        printf("Anda tidak lulus");
    }

    return 0;
}