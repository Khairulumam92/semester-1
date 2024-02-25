#include <stdio.h>

int main() {
	
    int i, j;
    int matrik1[2][2] = {{1, 2}, {3, 4}};
    int matrik2[2][2] = {{5, 6}, {7, 8}};
    int hasil[2][2];

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            hasil[i][j] = matrik1[i][j] + matrik2[i][j];
        }
    }

    printf("Hasil perjumlahan matriks: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}