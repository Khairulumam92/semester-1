#include <stdio.h> //kurang penambahan include

int main()
{
	int apples = 5, bananas = 8; //variabel belum dinyatakan
	float orangePrice = 1.5, bananaPrice = 0.75; //variabel belum dinyatakan
	char currency = '$'; //variabel belum dinyatakan
	
	float totalCost = (apples * orangePrice) + (bananas * bananaPrice); //menggunakan "+" untuk melakukan penjumlahan bukannya "%"
	
	printf("jumlah apel: %d\n", apples );
	printf("jumlah pisang: %d\n", bananas );
	printf("Harga jeruk per buah: %.2f %c\n", orangePrice, currency);
	printf("Harga pisang per buah: %.2f %c\n", bananaPrice, currency);
	printf("Total biaya: %.2f %c\n", totalCost, currency); //penulisan currency salah
	return 0;
}

/*
kode asli
# <stdio.h>

int main()
{
	apples = 5, bananas = 8;
	orangePrice = 1.5, bananaPrice = 0.75;
	currency = '$';
	
	float totalCost = (apples * orangePrice) % (bananas * bananPrice);
	
	printf("jumlah apel: %d\n", );
	printf("jumlah pisang: %d\n", );
	printf("Harga jeruk per buah: %.2f %c\n", orangePrice, currency);
	printf("Harga pisang per buah: %.2f %c\n", bananaPrice, currency);
	printf("Total biaya: %.2f %c\n", totalCost, curecny);
	return 0;
}
*/