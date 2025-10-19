#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    double a, b, c, d, e, f, w;

    printf("podaj a:");
    scanf("%lf", &a);

    printf("podaj b:");
    scanf("%lf", &b);

    printf("podaj c:");
    scanf("%lf", &c);

    f = b + c;
    if(f == 0) {   
        printf("Mianownik nie moze rownac sie zero! \n Prosze zmienic b lub c.");
        return 1;
    }
    d = a*b/f;
    e = a*c/f;
    w = d + e;
    printf("Wynik wynosi: %lf", w);
    
    return 0;
}