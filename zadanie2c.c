#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    printf("Podaj a:");
    scanf("%lf", &a);

    printf("podaj b:");
    scanf(("%lf"), &b);

    c = sqrt(a*a + b*b);

    printf("Pierwiastek sumy kwadratow a i b wynosi: %lf", c);
    return 0;
}