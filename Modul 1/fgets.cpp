#include <stdio.h>
#include <string.h>

int main()
{
	char name[50];
	printf("Masukkan nama anda: ");
	fgets(name, sizeof(name), stdin);
	
	name [strcspn(name, "\n")] = '\0';
	
	printf("Halo, %s!", name);
	return 0;
}