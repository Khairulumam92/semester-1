#include <stdio.h>


int main() 
{
    float nilai_matematika, nilai_fisika, nilai_biologi, nilai_rata_rata;
    int total_sks = 9;

    printf("=== Penghitungan Nilai Rata-rata ===\n");

    // Get grades from user
    printf("Masukkan nilai Matematika: ");
    scanf("%f", &nilai_matematika);

    printf("Masukkan nilai Fisika: ");
    scanf("%f", &nilai_fisika);

    printf("Masukkan nilai Biologi: ");
    scanf("%f", &nilai_biologi);

    // Calculate weighted average
    nilai_rata_rata = (nilai_matematika * 4 + nilai_fisika * 3 + nilai_biologi * 2) / total_sks;

    printf("Nilai Rata-rata: %.2f\n", nilai_rata_rata);

    return 0;
}