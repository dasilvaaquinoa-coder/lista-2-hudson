#include <stdio.h>


int main() {
    int inicio, fim;

    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);
    printf("Digite o valor final: ");
    scanf("%d", &fim);

    for (int i = inicio; i <= fim; i++) {
        if (i % 2 == 0) {
            printf("%d e PAR\n", i);
        } else {
            printf("%d e IMPAR\n", i);
        }
    }

    return 0;
}