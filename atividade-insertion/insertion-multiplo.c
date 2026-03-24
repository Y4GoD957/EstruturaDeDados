#include <stdio.h>

void imprimirVetor(int vet[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main() {
    int vet[8] = {1, 3, 5, 7, 10, 2, 9, 4};
    int tamanho = 8;

    printf("Vetor original:\n");
    imprimirVetor(vet, tamanho);

    for (int i = 4; i < tamanho; i++) {
        int chave = vet[i];
        int j = i - 1;

        while (j >= 0 && vet[j] > chave) {
            vet[j + 1] = vet[j];
            j--;
        }

        vet[j + 1] = chave;

        printf("Após inserir %d:\n", chave);
        imprimirVetor(vet, tamanho);
    }

    return 0;
}