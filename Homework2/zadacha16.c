#include <stdio.h>
#include <stdlib.h>

int main(){
    char number[5] = " ";
    char numberChanger[5] = "10101";
    int result;
    printf("Type a number: ");
    scanf("%s", &number);
    result =(int)number ^ numberChanger;
    printf("The new number is: %s", number);
    return 0;
}