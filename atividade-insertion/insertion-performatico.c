#include <stdio.h>

void imprimir_vetor(int n, int vet[]) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

void insertion_sort_performatico(int n, int vet[]) {
    int i, j, ins;

    for (i = 1; i < n; i++) {
        ins = vet[i];
        j = i;

        while (j > 0 && vet[j - 1] > ins) {
            vet[j] = vet[j - 1];
            j--;
        }

        vet[j] = ins;
    }
}

int main(void) {
    int vet[] = {6, 5, 3, 1, 8, 7, 2, 4};
    int n = sizeof(vet) / sizeof(vet[0]);

    printf("Vetor antes da ordenacao:\n");
    imprimir_vetor(n, vet);

    insertion_sort_performatico(n, vet);

    printf("Vetor depois da ordenacao (performatico):\n");
    imprimir_vetor(n, vet);

    return 0;
}