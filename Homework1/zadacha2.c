#include <stdio.h>

int main(){
    double ounces = 0;
    printf("How much ounces would you like: ");
    scanf("%lf", &ounces);
    if(ounces > 0){
    ounces /= 8;
    printf("Your ounces are %.2f cups", ounces);
    }
    else {
        printf("Wrong input!");
    }
    return 0;
}