#include <stdio.h>

int main(){
    int x = 1, y = 0;
    int z = y || x;
    printf("\nInit values: X= %d, Y= %d\n", x, y);
    x = 1 + 2, 2 * 3, 3 + 4;
    y = ( 7 * 8, 8 + 9, 9 - 4);
    printf("\nX= %d, Y= %d\n", x, y);
    return 0;
}