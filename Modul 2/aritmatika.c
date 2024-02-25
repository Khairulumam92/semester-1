#include <stdio.h>

int main()
{

    int num1 = 10;
    int num2 = 5;

    int hasilPenjumlahan = num1 + num2;
    printf("hasilPenjumlahan: %d\n", hasilPenjumlahan);

    int hasilPengurangan = num1 - num2;
    printf("hasilPengurangan: %d\n", hasilPengurangan);

    int hasilPerkalian = num1 * num2;
    printf("hasilPerkalian: %d\n", hasilPerkalian);

    int hasilPembagian = num1 / num2;
    printf("hasilPembagian: %d\n", hasilPembagian);

    int hasilModulo = num1 % num2;
    printf("hasilModulo (sisa bagi): %d\n", hasilModulo);

    return 0;
}