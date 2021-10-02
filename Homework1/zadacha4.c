#include <stdio.h>

int addDigit(int a, int b);

int main(){
    int a = 1, b = 4;
    printf("The result is: %d", addDigit(a,b));
    return 0;
}

int addDigit(int a, int b){
    return a+b;
}
