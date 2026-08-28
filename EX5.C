#include<stdio.h>
int main (){

    float a, b, c;

    // Entrada dos valores
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    printf("Digite o terceiro valor: ");
    scanf("%f", &c);

    // Estrutura de decisao para encontrar o maior valor
    if (a >= b && a >= c) {
        printf("O maior valor e: %.2f\n", a);
    } else if (b >= a && b >= c) {
        printf("O maior valor e: %.2f\n", b);
    } else {
        printf("O maior valor e: %.2f\n", c);
    }

    return 0;
}

