#include <stdio.h>

int ultimaOcorrencia(int v[], int size, int val) {
    int indice = -1;
    for (int i = 0; i < size; i++) {
        if (v[i] == val) {
            indice = i;
        }
    }
    return indice;
}

int main() {
    int v[10] = {3, 7, 2, 7, 5, 7, 9, 1, 4, 7};
    int val;
    printf("Digite um valor para buscar: ");
    scanf("%d", &val);
    int indice = ultimaOcorrencia(v, 10, val);
    if (indice != -1) {
        printf("A ultima ocorrencia do valor %d esta na posicao %d.\n", val, indice);
    } else {
        printf("O valor %d nao foi encontrado no vetor.\n", val);
    }
    return 0;
}