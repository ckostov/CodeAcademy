#include <stdio.h>

int test();

int main(){

    test();
    test();
    printf("%d", test());

    return 0;
}

int test(){
    static int count = 0;
    return count++;
}