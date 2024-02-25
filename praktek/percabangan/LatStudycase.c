#include <stdio.h>
//nested loop
int main(){
    char jenisKelamin;
    int tinggi;

    printf("Input jenis kelamin : ");
    scanf("%c",&jenisKelamin);
    printf("Massukkan tinggi badan : ");
    scanf("%d",&tinggi);

    if (jenisKelamin == 'L'){
        if(tinggi >= 160){
            printf("selamat kamu lolos");
        }else {
            printf("mohon maaf kamu belum lolos");
        }
    }else if(jenisKelamin == 'P'){
        if (tinggi >= 155){
            printf("selamat kamu lolos");
        } else {
            printf("mohon maaf kamu belum lolos");
            }
    }
}