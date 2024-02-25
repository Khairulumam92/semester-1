#include <stdio.h>

int main()
{
	
	int num = 10;
	int *ptr; //deklarasi pointer bertipe integer
	
	//mengisi pointer dengan alamat memori variabel num
	ptr = &num;
	
	printf("Nilai dari num: %d\n", num);
	printf("Alamat memori dari num: %p\n", &num);
	printf("Nilai yang diakses melalui ptr: %d\n", *ptr);
	printf("Alamat memori yang disimpan dalam pointer ptr: %p\n", num);
	
	//mengubah nilai variabel num melalui pointer ptr
	*ptr = 50;
	printf("nilai baru dari num setelah diubah melalui pointer: %d\n", num);
	
	return 0;
}