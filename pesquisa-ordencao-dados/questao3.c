#include <stdio.h>

static void imprimir_vetor(const int vetor[], int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void bubble_sort_otimizado(int vetor[], int tamanho) {
    int i, j, temp, houve_troca;

    for (i = 0; i < tamanho - 1; i++) {
        houve_troca = 0;

        for (j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                houve_troca = 1;
            }
        }

        if (!houve_troca) {
            break;
        }
    }
}

int main(void) {
    int vetor[] = {9, 4, 7, 1, 3, 8, 2, 6, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Antes da ordenacao:\n");
    imprimir_vetor(vetor, tamanho);

    bubble_sort_otimizado(vetor, tamanho);

    printf("Depois da ordenacao crescente:\n");
    imprimir_vetor(vetor, tamanho);

    return 0;
}
