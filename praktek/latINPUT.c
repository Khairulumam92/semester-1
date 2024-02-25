#include<stdio.h>

int main(){
    int usia;
    float ipk;
    char nama[20];

    printf("Masukkan  nama anda = ");
    scanf("%[^\n]s", nama);
    /*"[^\n]" dipakai untuk menyiasati agar spasi tidak menhentikan program
    atau bisa juga dengan mengganti scanf() dengan gets(namaVariable)*/

    printf("Masukkan usia anda = ");
    scanf("%d",&usia);

    printf("Masukkan IPK anda = ");
    scanf("%f",&ipk);

    printf("Nama anda adalah %s\n",nama);
    printf("Usia anda adalah = %d tahun\n", usia);
    printf("IPK anda adalah = %.2f\n", ipk);

    return 0;
}