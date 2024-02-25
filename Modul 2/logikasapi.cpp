#include <stdio.h>

int main()
{
	int sapi = 30;
	int ayam = 5;
	int emas = 50;
	
	if ( sapi > emas || ayam > emas )
	{
		printf("harga sapi atau ayam lebih mahal dari emas\n");
	}
	else
	{
		printf("dari kedua harga hewan masih lebih mahal emas\n");
	}
	
	
	return 0;
}