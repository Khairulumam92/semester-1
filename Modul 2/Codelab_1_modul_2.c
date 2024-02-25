#include <stdio.h>

// Define the weights of the sheep as constants
const double KAMBING_JANTAN_I = 120.0;
const double KAMBING_JANTAN_II = 85.8;
const double KAMBING_BETINA_I = 23.0;

int main()
{
    // variable sapi
    double sapi1, sapi2, sapi3, sapi4;

    // memasukkan berat dari sapi
    printf("Masukkan berat sapi 1: ");
    scanf("%lf", &sapi1);

    printf("Masukkan berat sapi 2: ");
    scanf("%lf", &sapi2);

    printf("Masukkan berat sapi 3: ");
    scanf("%lf", &sapi3);

    printf("Masukkan berat sapi 4: ");
    scanf("%lf", &sapi4);

    // menghitung total berat yang di input
    double totalSapi = sapi1 + sapi2 + sapi3 + sapi4;
    double totalKambing = KAMBING_JANTAN_I + KAMBING_JANTAN_II + KAMBING_BETINA_I;

    // menampilkan hasil akhir
    printf("Hasil Berat Sapi: %.2lf\n", totalSapi);
    printf("Hasil Berat Kambing: %.2lf\n", totalKambing);

    return 0;
}
