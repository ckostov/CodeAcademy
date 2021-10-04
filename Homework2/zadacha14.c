#include <stdio.h>

int main(){
    int days = 365;
    int hours = 24;
    int minutes = 60;
    int seconds = 60;

    unsigned int secondsInYear = days * hours * minutes * seconds;

    printf("%u", secondsInYear);

    return 0;
}