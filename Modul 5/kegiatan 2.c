#include <stdio.h>
#include <stdbool.h>

int main() {
    int i, j, k;
    int choice;
    int matrix1[3][3], matrix2[3][3], result[3][3];

    while (true) {
        printf("Operasi Matriks\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("Pilih Salah Satu (1/2/3): ");
        if (scanf("%d", &choice) != 1 || (choice < 1 || choice > 3)) {
            printf("INPUTAN TIDAK VALID\n");
            while (getchar() != '\n');
            continue;
        }

        printf("Masukkan elemen pada matriks pertama (3x3):\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (scanf("%d", &matrix1[i][j]) != 1) {
                    printf("INPUTAN TIDAK VALID\n");
                    while (getchar() != '\n');
                    //break;
                }
            }
        }
        if (getchar() != '\n') {
            printf("INPUTAN TIDAK VALID\n");
            while (getchar() != '\n');
            continue;
        }

        printf("Masukkan elemen pada matriks kedua (3x3):\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (scanf("%d", &matrix2[i][j]) != 1) {
                    printf("INPUTAN TIDAK VALID\n");
                    while (getchar() != '\n');
                    break;
                }
            }
        }
        if (getchar() != '\n') {
            printf("INPUTAN TIDAK VALID\n");
            while (getchar() != '\n');
            continue;
        }

        printf("Matriks Pertama:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", matrix1[i][j]);
            }
            printf("\n");
        }

        printf("Matriks Kedua:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", matrix2[i][j]);
            }
            printf("\n");
        }

        if (choice == 1) {
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                }
            }

            printf("Hasil Penjumlahan:\n");
        } else if (choice == 2) {
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    result[i][j] = matrix1[i][j] - matrix2[i][j];
                }
            }

            printf("Hasil Pengurangan:\n");
        } else if (choice == 3) {
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    result[i][j] = 0;
                    for (k = 0; k < 3; k++) {
                        result[i][j] += matrix1[i][k] * matrix2[k][j];
                    }
                }
            }

            printf("Hasil Perkalian:\n");
        }

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
        break;
    }

    return 0;
}