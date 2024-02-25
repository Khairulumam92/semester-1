#include <stdio.h>

int main()
{
	int x = 5;

	// Operator penugasan dengan penambahan
	x += 3;
	printf("Nilai x setelah penambahan: %d\n", x);

	// Operator penugasan denqan pengurangan
	x -= 2;
	printf("Nilai x setelah pengurangan: %d\n", x);

	// Operator penugasan dengan perkalian
	x *= 4;
	printf("Nilai x setelah perkalian: %d\n", x);

	// Operator penugasan denqan pembaqian
	x /= 2;
	printf("Nilai x setelah pembagian: %d\n", x);

	// Operator penugasan dengan modulo
	x %= 3;
	printf("Nilai x setelah sisa bagi: %d\n", x);

	return 0;
}