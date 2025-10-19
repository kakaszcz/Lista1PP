#include<stdio.h>

int main() {
    int n = 0;
    double a, b, c, suma, srednia;

    printf("Wprowadz a:");
    scanf("%lf", &a);
    n = n +1;

    printf("Wprowadz b:");
    scanf("%lf", &b);
    n = n +1;

    printf("Wprowadz c:");
    scanf("%lf", &c);
    n = n +1;

    suma = a + b + c;
    srednia = suma/n;

    if("srednia > 5.0") {
        printf("Wysoka srednia\n");
    }
    printf("Srednia wynosi %lf\n", srednia);
    printf("Suma wynosi %lf", suma);

    return 0;
}