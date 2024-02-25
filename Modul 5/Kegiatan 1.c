#include <stdio.h>

int main() {
    int i, n, ganjil = 0, genap = 0;
    int arr[100];
    int arrGanjil[100], arrGenap[100];

    printf("Masukkan jumlah elemen yang akan diinput: ");
    scanf("%d", &n);

    printf("Input %d elemen:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0) {
            arrGenap[genap++] = arr[i];
        } else {
            arrGanjil[ganjil++] = arr[i];
        }
    }

    printf("Bilangan Ganjil dalam array: ");
    for(i = 0; i < ganjil; i++) {
        printf("%d ", arrGanjil[i]);
    }

    printf("\nBilangan Genap dalam array : ");
    for(i = 0; i < genap; i++) {
        printf("%d ", arrGenap[i]);
    }

    printf("\n");
    return 0;
}