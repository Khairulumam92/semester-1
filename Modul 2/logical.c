#include <stdio.h>

int main()
{
    int x = 5;
    int y = 3;

    if (x > 1 && y > 1)
    {
        printf("kedua nilai x dan y lebih besar dari 1\n");
    }
    else
    {
        printf("salah satu atau kedua nilai x dan y tidak lebih besar dari 10\n");
    }

    if (x > 10 || y > 10)
    {
        printf("salah satu dari nilai x atau y lebih besar dari 10\n");
    }
    else
    {
        printf("kedua nilai x dan y tidak lebih besar dari 10\n");
    }

    if (!(x > y))
    {
        printf("x tidak lebih besar dari y\n");
    }
    else
    {
        printf("x lebih besar y\n");
    }

    return 0;
}