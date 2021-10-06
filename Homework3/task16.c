#include <stdio.h>
#define pi 3.14159

double okrS(double p, double rad);
double elipS(double p, double A, double B);

int main(){
    double num1 = 0;
    double num2 = 0;
    printf("%lf", elipS(pi, num1, num2));
    
    double r1 = 1.0;
    printf("%lf\n", okrS(pi, r1));

    double r2 = 1.5;
    printf("%lf\n", okrS(pi, r2));

    double r3 = 13.0;
    printf("%lf\n", okrS(pi, r3));

    return 0;
}

double okrS(double p, double rad){
    double okrS = 0;
    okrS = p * rad * rad;
    return okrS;
}

double elipS(double p, double A, double B){
    double elipS = 0;
    scanf("%lf", &A);
    scanf("%lf", &B);
    elipS = p*A*B;
    return elipS;
}