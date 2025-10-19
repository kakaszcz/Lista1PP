#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(){
    double r, objetosc;

    printf("Podaj promien kola:");
    scanf("%lf", &r);
    if(r < 0){
        printf("promien nie moze byc ujemny!\n");
        return 1;
    }

    objetosc = 4/3 * M_PI * r * r * r;

    printf("Objetosc kuli o promieniu %lf wynosi: %lf", r, objetosc);
    return 0;
}