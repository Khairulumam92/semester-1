#include <stdio.h>

int main()
{
	int a = 12, b = 28; // "=" digunakan untuk menyatakan variabel, bukan untuk melakukan operasi penjumlahan
	float c = 2.5, d = 8.9; //jangan lupa titik koma;
	char e = 'R'; //perintah diketik char bukan double
	
	//Tambahkan komentar disini
	int sum = a + (b * c) - d;
	printf("Bilangan a: %d\n", a);
	printf("Bilangan b: %d\n", b); //perintah diketik printf bukan prints
	printf("Bilangan c: %.2f\n", c); //variabel c bukan d
	printf("Bilangan d: %.2f\n", d);
	printf("Bilangan e: %c\n", e);//perintah diketik printf bukan prints
	printf("Hasil: %d\n", sum); //menggunakan sum bukan double, tipe data adalah integer(%d) bukan float(%f)
	return 0;
}

/*
#include <stdio.h>

int main()
{
	int a = 12 + b = 28;
	float c = 2.5 + d = 8.9
	double e = 'R';
	
	(Tambahkan komentar disini)
	int sum = a + (b * c) - d;
	printf("Bilangan a: %d\n", a);
	prints("Bilangan b: %d\n", b);
	printf("Bilangan c: %.2f\n", d);
	printf("Bilangan d: %.2f\n", d);
	prints("Bilangan e: %c\n", e);
	printf("Hasil: %f\n", double);
	return 0;
}
*/