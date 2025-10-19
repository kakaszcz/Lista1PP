#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, p, q, x1, x2, delta, pzdelty;

    printf("Podaj wspolczynniki trojmianu kwadratowego ax^2 + bx + c = 0 \n");
    printf("a:");
    scanf("%lf", &a);

    printf("b:");
    scanf("%lf", &b);

    printf("c:");
    scanf("%lf", &c);

    if(a == 0){
        printf("a nie moze byc rowne 0, bo wtedy wyrazenie nie jest trojmianem");
        return 1;
    }

    delta = pow(b, b) - 4 * a * c;
    pzdelty = sqrt(delta);
    p = -b/2*a;
    q = -delta/4*a;
    x1 = (-b - pzdelty)/2 * a;
    x2 = (-b + pzdelty)/2 * a;
    if(delta < 0){
        printf("Funkcja nie ma miesc zerowych\n");
        printf("Wierzcholek ma wspolrzedne:\nw(%lf,%lf)\n", p, q);
        printf("Punkt przeciecia z osia OY ma wspolrzedne:\nP(0,%lf), c");

    } else if(delta == 0){
        printf("Funkcja ma jedno miejsce zerowe o wspolrzednych \n x(%lf,0)", x1);
        printf("Wierzcholek ma wspolrzedne:\nw(%lf,%lf)\n", p, q);
        printf("Punkt przeciecia z osia OY ma wspolrzedne:\nP(0,%lf), c");
    } else if(delta > 0){
        printf("Funkcja ma dwa miejsca zerowe: X1(%lf,0) i X2(%lf,0)\n", x1, x2);
        printf("Wierzcholek ma wspolrzedne:\nw(%lf,%lf)\n", p, q);
        printf("Punkt przeciecia z osia OY ma wspolrzedne:\nP(0,%lf)", c);

    }
    return 0;
}
