#include <stdio.h>

static void imprimir_vetor(const int vetor[], int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void selection_sort_min_max(int vetor[], int tamanho) {
    int inicio, fim, i;
    int menor_indice, maior_indice, temp;

    for (inicio = 0, fim = tamanho - 1; inicio < fim; inicio++, fim--) {
        if (vetor[inicio] > vetor[fim]) {
            temp = vetor[inicio];
            vetor[inicio] = vetor[fim];
            vetor[fim] = temp;
        }

        menor_indice = inicio;
        maior_indice = fim;

        for (i = inicio + 1; i < fim; i++) {
            if (vetor[i] < vetor[menor_indice]) {
                menor_indice = i;
            }

            if (vetor[i] > vetor[maior_indice]) {
                maior_indice = i;
            }
        }

        if (menor_indice != inicio) {
            temp = vetor[inicio];
            vetor[inicio] = vetor[menor_indice];
            vetor[menor_indice] = temp;

            if (maior_indice == inicio) {
                maior_indice = menor_indice;
            }
        }

        if (maior_indice != fim) {
            temp = vetor[fim];
            vetor[fim] = vetor[maior_indice];
            vetor[maior_indice] = temp;
        }
    }
}

int main(void) {
    int vetor[] = {9, 4, 7, 1, 3, 8, 2, 6, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Antes da ordenacao:\n");
    imprimir_vetor(vetor, tamanho);

    selection_sort_min_max(vetor, tamanho);

    printf("Depois da ordenacao crescente:\n");
    imprimir_vetor(vetor, tamanho);

    return 0;
}
