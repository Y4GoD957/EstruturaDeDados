#include <stdio.h>

void imprimir_vetor(int n, int vet[]) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

void insertion_sort_ingenuo_fim_inicio(int n, int vet[]) {
    int i, j, temp;

    for (i = n - 1; i >= 0; i--) {
        j = i;

        while (j < n - 1 && vet[j] > vet[j + 1]) {
            temp = vet[j];
            vet[j] = vet[j + 1];
            vet[j + 1] = temp;
            j++;
        }
    }
}

int main(void) {
    int vet[] = {6, 5, 3, 1, 8, 7, 2, 4};
    int n = sizeof(vet) / sizeof(vet[0]);

    printf("Antes da ordenacao:\n");
    imprimir_vetor(n, vet);

    insertion_sort_ingenuo_fim_inicio(n, vet);

    printf("Depois da ordenacao crescente (ingenua, do fim para o inicio):\n");
    imprimir_vetor(n, vet);

    return 0;
}