#include <stdio.h>

int isLetter(char c);


int isLetter(char c){
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z');

}