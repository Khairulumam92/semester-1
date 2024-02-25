#include <stdio.h>

int main() {
  // Deklarasikan variabel
  float matematika, fisika, biologi, rata_rata;

  // Input nilai matematika
  printf("Masukkan nilai matematika: ");
  scanf("%f", &matematika);

  // Input nilai fisika
  printf("Masukkan nilai fisika: ");
  scanf("%f", &fisika);

  // Input nilai biologi
  printf("Masukkan nilai biologi: ");
  scanf("%f", &biologi);

  // Hitung nilai rata-rata
  rata_rata = (matematika + fisika + biologi) / 3;

  // Tampilkan output
  printf("");
  return 0;
}