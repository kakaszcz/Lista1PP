#include <stdio.h>

int main() {
    int a, b, s;
    printf("Podaj a:");
    scanf("%d", &a);

    printf("Podaj b:");
    scanf("%d", &b);

    if(a > b) {
        printf("Pierwsza liczba jest wieksza od drugiej\n");
    } else if(a == b) {
        printf("Podane liczby sa rowne\n");
    } else {
        printf("Druga liczba jest wieksza od pierwszej\n");
        s = a + b;
        printf("Suma podanych liczb wynosi: %d", s);
    }

    return 0;
}