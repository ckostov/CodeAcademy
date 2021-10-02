#include <stdio.h>

int main(){
    double earthDays = 0;
    double jupiterYears = 0;
    printf("Enter a number of earth days: ");
    scanf("%lf", &earthDays);
    if(earthDays >= 0){
        /* One year on Jupiter is 4380 earth days*/
        jupiterYears = earthDays / 4380;
        printf("These are %.2f years in jupiter", jupiterYears);
    }
    else{
        printf("You can't have negative number of days!");
    }
    return 0;
}