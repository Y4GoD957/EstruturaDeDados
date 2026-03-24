#include <stdio.h>

void imprimirVetor(int vet[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main() {
    int vet[8] = {1, 3, 5, 7, 7, 2, 9, 4};
    int tamanho = 8;

    printf("Vetor original:\n");
    imprimirVetor(vet, tamanho);

    // Primeira inserção: inserir o valor 2 na parte ordenada à esquerda
    int chave = vet[5];   // valor 2
    int j = 4;            // começa comparando com o elemento anterior

    while (j >= 0 && vet[j] > chave) {
        vet[j + 1] = vet[j];
        j--;
    }

    vet[j + 1] = chave;

    printf("Após a primeira inserção:\n");
    imprimirVetor(vet, tamanho);

    return 0;
}