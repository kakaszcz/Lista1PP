#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    double a, p, n, i, k;

    printf("podaj a:");
    scanf("%lf", &a);

    printf("podaj p:");
    scanf("%lf", &p);

    printf("podaj n:");
    scanf("%lf", &n);

    i = a*(1 + p/100);
    k = pow(i, n);

    printf("Wynik wynosi: %lf", k);
    
    return 0;
}