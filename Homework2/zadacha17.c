#include <stdio.h>

int main(){
    char number[10] = " ";
    int counter = 0;
    printf("Type a number: ");
    scanf("%s", &number);
    for(int i = 0; i <= sizeof(number); i++){
        if(number[i] == 0 && number[i+1] == 1 && number[i+2] == 0){
            counter++;
        }
    }
    printf("%d", counter);
    return 0;
}