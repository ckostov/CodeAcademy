#include <stdio.h>

void generate(int number);

int main(){
    int A = 1;

    generate(A);

    return 0;
}

void generate(int number){
    number ^= number << 13;
    printf("(i) %d ^= %d\n", number);
    number ^= number >> 17;
    printf("(ii) %d ^= %d\n", number);
    number ^= number << 5;
    printf("(iii) %d ^= %d\n", number);
}