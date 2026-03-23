#include <stdio.h>

static void imprimir_vetor(const int vetor[], int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void selection_sort_decrescente_menores_fim(int vetor[], int tamanho) {
    int i, j, maior_indice, temp;

    for (i = 0; i < tamanho - 1; i++) {
        maior_indice = i;

        for (j = i + 1; j < tamanho; j++) {
            if (vetor[j] > vetor[maior_indice]) {
                maior_indice = j;
            }
        }

        if (maior_indice != i) {
            temp = vetor[i];
            vetor[i] = vetor[maior_indice];
            vetor[maior_indice] = temp;
        }
    }
}

int main(void) {
    int vetor[] = {9, 4, 7, 1, 3, 8, 2, 6, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Antes da ordenacao:\n");
    imprimir_vetor(vetor, tamanho);

    selection_sort_decrescente_menores_fim(vetor, tamanho);

    printf("Depois da ordenacao decrescente:\n");
    imprimir_vetor(vetor, tamanho);

    return 0;
}
