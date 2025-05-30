#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digita ai um numero, e ele tem que ser maior que zero!\n");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Erro: O numero deve ser maior que zero.\n");
        return 1;
    }

    while (numero != 0) {
        soma += numero % 10;
        numero = numero / 10; 
    }

    printf("A soma dos algorismos e: %d\n", soma);

    return 0;
}
