#include <stdio.h>

int main(){

    char str[] = " ";
    for(int i = 0; i <= 8; i++){
        str[i] = 0xBB;

    printf("Double is: %X\n", (double)(str[i]));
    printf("Signed long long is: %X\n",(long long)(str[i]));
    printf("Unsigned long long is: %X\n",(unsigned long long)(str[i]));
    }



    return 0;
}