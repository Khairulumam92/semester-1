#include <stdio.h>

int main() {
    int i, j, num, limit;

    printf("Masukkan nilai: ");
    scanf("%d", &num);

    printf("Masukkan batas perkalian atau pangkat: ");
    scanf("%d", &limit);

    printf("\n=== Perkalian ===\n");
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    printf("\n=== Perpangkatan ===\n");
    for(i = 1; i <= 10; i++) {
        for(j = 1; j <= limit; j++) {
        }
        printf("%d pangkat %d = %d\n", limit, i, limit * i);
    }

    return 0;
}