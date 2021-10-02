#include <stdio.h>

int main(){
    double weight = 0;
    printf("Enter your weight: ");
    scanf("%lf", &weight);
    if(weight > 0){
        weight = (weight*17)/100;
        printf("Your weight on the moon will be: %.2f", weight);
    }
    else {
        printf("Wrong input!");
    }
    return 0;
}