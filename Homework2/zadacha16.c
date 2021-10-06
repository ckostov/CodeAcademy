#include <stdio.h>
#include <stdlib.h>

int main(){
    char number[] = " ";
    int result;
    printf("Type a number: ");
    scanf("%s", &number);
    for(int i = 0; i < sizeof(number); i++){
        if(i % 2 == 1 && number[i] == '0'){
            number[i] = '1';
        }
        else   if(i % 2 == 1 && number[i] == '1'){
            number[i] = '0';
        }

    }
    printf("The new number is: %s", number);
    return 0;
}