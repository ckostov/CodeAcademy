#include <stdio.h>
#include <unistd.h>

int main(){
    char str[] = "*.................... ";
    char swaper = ' ';

    printf("%s\n", str);

    for(int i = 0; i < 20; i++){
            sleep(1);
            swaper = str[i];
            str[i] = str[i + 1];
            str[i + 1] = swaper;
            printf("%s\n", str);
    }

    return 0;
}