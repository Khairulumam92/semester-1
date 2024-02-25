#include <stdio.h>

int main(){
    int a = 1; //true
    int b = 0; //false

    printf("a = %d", a);
    printf("\nb = %d", b);

    printf("\na && b = %d", a && b);//logika and "false"
    printf("\na || b = %d", a || b);//logika or "true"
    printf("\na ! b = %d", !a);//logika not "false"
    printf("\na ^ b = %d", a ^ b);//logika Xor "true"


    return 0;
}