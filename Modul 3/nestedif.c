#include <stdio.h>

int main()
{
    int num = -1;

    if (num > 0)
    {
        printf("Angka adalah bilangan positif.\n");
        if (num % 2 == 0)
        {
            printf("Angka adalah bilangan genap.\n");
        }
        else
        {
            printf("Angka adalah bilangan ganjil.\n");
        }
    }
    else
    {
        printf("Angka adalah bilangan negatif atau nol.\n");
    }

    return 0;
}