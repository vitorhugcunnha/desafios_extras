#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int numero1[5], numero2[5], correto[5], resposta[5], nAcertos = 0;
    float nota;

    for (int i = 0; i < 5; i++) {
        numero1[i] = (rand() % 100) + 1;
        numero2[i] = (rand() % 100) + 1;
        correto[i] = numero1[i] + numero2[i];

        printf("Pergunta %i: Qual e a soma de %i + %i? ", i + 1, numero1[i], numero2[i]);
        scanf("%i", &resposta[i]);

        if (resposta[i] == correto[i]) {
            nAcertos++;
        }
    }

    printf("\n Resultado da Prova \n");
    
    for (int i = 0; i < 5; i++) {
        printf("Pergunta %i: %i + %i = %i | Sua resposta: %i | ", i + 1, numero1[i], numero2[i], correto[i], resposta[i]);

        if (resposta[i] == correto[i]) {
            printf("Correto\n");
        } else {
            printf("Incorreto\n");
        }
    }

    nota = nAcertos * 2.0; 

    printf("\nAcertos: %i", nAcertos);
    printf("\nErros: %i", 5 - nAcertos);
    printf("\nNota final: %.2f/10\n", nota);

    return 0;
}
