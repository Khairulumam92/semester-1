#include <stdio.h>

int main()
{
    int age;

    printf("Masukkan usia anda: ");
    scanf("%d", &age);

    if (age < 0)
    {
        printf("Usia tidak boleh negatif.\n");
    }
    else if (age < 18)
    {
        printf("Anda masih di bawah umur.\n");
    }
    else if (age < 60)
    {
        printf("Anda adalahh orang dewasa.\n");
    }
    else
    {
        printf("Anda sudah lansia.\n");
    }

    return 0;
}