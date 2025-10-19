#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    double r, pole;

    printf("Podaj promien kola:");
    scanf("%lf", &r);

    if(r < 0) {
        printf("promien nie moze byc ujemny!\n");
        return 1;
    }
    pole = M_PI * r * r;
    printf("Pole powierzchni kola o promieniu %lf wynosi: %lf", r, pole);
    
    return 0;
}