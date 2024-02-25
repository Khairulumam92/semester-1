#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main()
{
    // boolean
    bool isTrue = true;
    bool isFalse = false;

    printf("Boolean values:\n");
    printf("  isTrue: %d\n", isTrue);
    printf("  isFalse: %d\n", isFalse);

    // strings
    char str1[] = "hello";
    char str2[10];
    strcpy(str2, str1);

    printf("\nStrings:\n");
    printf("  str1: %s\n", str1);
    printf("  str2: %s\n", str2);

    // pointers
    int num = 42;
    int *ptr = &num;

    printf("\nPointers:\n");
    printf("  Value of num: %d\n", num);
    printf("  Address of num: %p\n", &num);
    printf("  Value of ptr: %p\n", ptr);
    printf("  Value pointed by ptr: %d\n", *ptr);

    return 0;
}
