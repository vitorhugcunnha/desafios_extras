#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10];

    //Arrumar o codigo tá dando errado no segundo For, resolver problema.
    for(int i = 0; i < 10; i++){
        printf("Digite os numeros!\n");
        scanf("%i", &vetor[i]);
    }

    printf("Ordem inversa:\n");

    for(int i = 9; i >=0; i--){
        printf("%i \n", vetor[i]);
    }

    return 0;
}