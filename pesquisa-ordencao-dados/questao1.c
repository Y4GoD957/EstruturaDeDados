#include <stdio.h>

static void imprimir_vetor(const int vetor[], int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void bubble_sort_crescente_menores_inicio(int vetor[], int tamanho) {
    int i, j, temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = tamanho - 1; j > i; j--) {
            if (vetor[j] < vetor[j - 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j - 1];
                vetor[j - 1] = temp;
            }
        }
    }
}

int main(void) {
    int vetor[] = {15, 4, 77, 1, 34, 8, 20, 6, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Antes da ordenacao:\n");
    imprimir_vetor(vetor, tamanho);

    bubble_sort_crescente_menores_inicio(vetor, tamanho);

    printf("Depois da ordenacao crescente:\n");
    imprimir_vetor(vetor, tamanho);

    return 0;
}
