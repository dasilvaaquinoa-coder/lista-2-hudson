#include <stdio.h>


int main() {
    int inicio, fim, quantidade = 0, soma = 0;

    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);
    printf("Digite o valor final: ");
    scanf("%d", &fim);

    printf("Numeros: ");
    for (int i = inicio; i <= fim; i++) {
        printf("%d ", i);
    }

    double media = (double)soma / quantidade;

    printf("\nQuantidade: %d", quantidade);
    printf("\nSomatoria: %d", soma);
    printf("\nMedia: %.2f\n", media);

    return 0;
}