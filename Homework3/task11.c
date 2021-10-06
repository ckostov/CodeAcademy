#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello"; 
    int len = strlen(str);
    int j = 0;
    char rts[len];

    for(int i = len; i >= 0; i--){
        rts[j] = str[i];
        printf("%c", rts[j]);
        j++;
    }
    return 0;
}