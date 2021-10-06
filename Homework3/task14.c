#include <stdio.h>

extern int count = 0;

void test();

int main(){
    test();
    test();
    test();
    printf("%d", count);
    return 0;
}

void test(){
    count++;
}