#include <stdio.h>

int main()
{
    int nilai;

    printf("Masukkan nilai anda: ");
    scanf("%d", &nilai);

    if (nilai < 0 || nilai > 100)
    {
        printf("Input tidak valid. nilai harus berada dalam rentang 0 hingga 100.\n");
        return 1;
    }

    switch (nilai / 10)
    {
        case 10:
            printf("Nilai anda adalah A.\n");
            break;
        case 9:
            printf("Nilai anda adalah B.\n");
            break;
        case 8:
            printf("Nilai anda adalah C.\n");
            break;
        case 7:
            printf("Nilai anda adalah D.\n");
            break;
        default:
            printf("Nilai anda adalah E.\n");
            break;
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int nilai;

    printf("Masukkan nilai anda: ");
    scanf("%d", &nilai);

    if (nilai < 0 || nilai > 100)
    {
        printf("Input tidak valid. nilai harus berada dalam rentang 0 hingga 100.\n");
        return 1;
    }

    switch (nilai / 10)
    {
        case 10:
            printf("Nilai anda adalah A.\n");
            break;
        case 9:
            printf("Nilai anda adalah B.\n");
            break;
        case 8:
            printf("Nilai anda adalah C.\n");
            break;
        case 7:
            printf("Nilai anda adalah D.\n");
            break;
        default:
            printf("Nilai anda adalah E.\n");
            break;
    }

    return 0;
}
