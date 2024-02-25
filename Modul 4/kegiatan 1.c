#include <stdio.h>
#include <math.h>

int main() {
    int i, n, batas;
    float result = 1;

    printf("Masukkan nilai : ");
    scanf("%d", &n);

    printf("Masukkan batas perkalian atau pangkat : ");
    scanf("%d", &batas);

    printf("\n=== Perkalian ===\n");
    for(i = 1; i <= batas; i++) {
        result = n * i;
        printf("%d x %d = %.0f\n", n, i, result);
    }

    printf("\n=== Perpangkatan ===\n");
    for(i = 1; i <= batas; i++) {
        result = pow(n, i);
        printf("%d pangkat %d = %.0f\n", n, i, result);
    }

    return 0;
}