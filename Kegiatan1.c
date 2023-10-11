#include <stdio.h>

int main()
{
	int kalkulus,pancasila,orkom;
	
	printf("masukkan nilai kalkulus: ");
	scanf("%d", &kalkulus); //scanf digunakan untuk menginput data dari keyboard
	
	printf("masukkan nilai pancasila: ");
    scanf("%d", &pancasila);
    
	printf("masukkan nilai orkom: ");
	scanf("%d", &orkom);
	
	printf("\n\n");//digunakan untuk memberikan spasi/jarak
	
	printf("Nilai kalkulus kamu: %d\n", kalkulus);
	printf("Nilai pancasila kamu: %d\n", pancasila);
	printf("Nilai orkom kamu: %d\n", orkom);
	
	
	return 0;
}