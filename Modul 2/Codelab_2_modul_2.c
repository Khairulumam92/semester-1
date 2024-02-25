#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main()
{
// Boolean
int isTrue = true;
int isFalse = false;

printf("Boolean values: \n");
printf("isTrue: %d\n", true);
printf("isFalse: %d\n", false);

// Strings
char str1[] = "Hello";
char str2[10];

strcpy(str2, str1);

printf("\nStrings:\n");
printf("str1: %s\n", str1);
printf("str2: %s\n", str2);

// Pointers
int num = 42;
int *ptr;

ptr = &num;

printf("\nPointers: \n");
printf("Value of num: %d\n", num);
printf("Address of num: %p\n", &num);
printf("Value of ptr: %d\n", *ptr);
printf("Value pointed by ptr: %p\n", ptr);

*ptr = 40;
printf("New value of num by ptr: %d\n", num);

return 0;
}
