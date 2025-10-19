#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(){
    double a, b, c, d, e, gamma;

    printf("podaj a:");
    scanf("%lf", &a);

    printf("podaj b:");
    scanf("%lf", &b);

    printf("podaj miare kata gamma:");
    scanf("%lf", &gamma);

    d = pow(a, a) + pow(b, b);
    e = (-2) * a * b * cos(gamma);
    c = sqrt(d + e);

    printf("Wynik wynosi: %lf", c);
    
    return 0;
}