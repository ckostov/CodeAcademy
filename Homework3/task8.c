#include <stdio.h>
#include <string.h>

int main(){
    char s[] = "Hi";

    for(int i = 0; i <= strlen(s); i++){
        printf("%c\n", s[i]);
        
    }
    printf("There are %d symbols\n", strlen(s));

    return 0;
}