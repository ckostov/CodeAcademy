#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main(){
    char str[] = "Hello";

    for(int i = 0; i <= strlen(str); i++){
        printf("%c", tolower(str[i]));
    }    

    return 0;
}