#include <stdio.h>

int main(){
    double num1 = 4.9876543;
    double num2 = 7.123456789012345;
    int num21 = 678890;
    long long int num3 = 18398458438583853;
    float num31 = 0.28;
    long double num4 = 0.39875937284928422;

    printf("%.7f\n%.15lf%d\n%lli%.2f\n%lli%f\n", num1, num2, num21, num3, num31, num31, num4);


    return 0;
}