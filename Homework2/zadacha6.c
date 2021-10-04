#include <stdio.h>

int main(){
    char num1 = -127;
    unsigned char num2 = 255;
    unsigned short int num3 = 63498;
    unsigned int num4 = 4294967292;
    long long int num5 = -9000000000000775845;
    printf("%d\n%u\n%hu\n%u\n%lli\n", num1, num2, num3, num4, num5);
    return 0;
}