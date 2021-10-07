#include <stdio.h>

int main(){

    char str[] = " ";
    for(int i = 0; i <= 4; i++){
        str[i] = 0xAA;

    printf("Float is: %X\n", (float)(str[i]));
    printf("Signed int is: %X\n",(int)(str[i]));
    printf("Unsigned int is: %X\n",(unsigned int)(str[i]));
    }



    return 0;
}