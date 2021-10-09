#include <stdio.h>

int main(){
    int x = 10;
    int y = 10;
    int z = 30;
    int t = x && y & x << 1;
    int t1 = x && y ^ x << 1;
    printf("t = %d\n", t);
    printf("t1 = %d\n", t1);
    return 0;
}