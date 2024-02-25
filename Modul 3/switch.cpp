#include <stdio.h>

int main()
{
	int choice;
	
	printf("Pilih salah satu dari berikut: \n");
	printf("1. Profil jaemin\n");
	printf("2. Nickname jaemin\n");
	printf("3. Qoute jaemin\n");
	printf("\nPilihan Anda: ");
	scanf("%d", &choice);
	
	switch(choice)
	{
	case 1:
		printf("Nama: Na jae-min\n, Tanggal lahir: 13 agustus 2000");
		break;
	case 2:
		printf("Nana <3");
		break;
	case 3:
		printf("If what you want to do doesn't work, cotinue until you can.");
		break;
	default:
		printf("Pilihan tidak valid");
	}
	
	
	return 0;
}