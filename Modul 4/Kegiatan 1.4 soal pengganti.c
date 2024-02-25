#include <stdio.h>

int main() {
    int nilai, batas, i, j;
    double hasilPerkalian = 1;  
    double hasilPerpangkatan = 1;
    
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    printf("Masukkan batas perkalian atau pangkat: ");
    scanf("%d", &batas);

    printf("\n === Perkalian ===\n");
    for (i = 1; i <= batas; i++) {
        hasilPerkalian = nilai * i;
        printf("%d x %d = %.lf\n", nilai, i, hasilPerkalian);
    }

    printf("\n === Perpangkatan ===\n");
    for (i = 1; i <= batas; i++) {
        hasilPerpangkatan = 1; 

        for (j = 1; j <= i; j++) {
            hasilPerpangkatan = hasilPerpangkatan * nilai; 
        }

        printf("%d pangkat %d = %.lf\n", nilai, i, hasilPerpangkatan);
    }

    return 0;
}
