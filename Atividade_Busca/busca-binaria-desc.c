#include <stdio.h>

int buscaBinariaDesc(int v[], int size, int val) {
    int inicio = 0, fim = size - 1, meio;
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (v[meio] == valor) {
            return meio;
        }
        else if (v[meio] < val) {
            fim = meio - 1;   // procura à esquerda
        }
        else {
            inicio = meio + 1; // procura à direita
        }
    }
    return -1;
}

int main() {
    int v[10] = {10,9,8,7,6,5,4,3,2,1};
    int val;
    printf("Digite um valor: ");
    scanf("%d", &val);
    int pos = buscaBinariaDecrescente(vetor, 10, valor);
    if (pos != -1) {
        printf("O valor %d foi encontrado na posicao %d\n", val, pos);
    } else {
        printf("O valor %d nao foi encontrado\n", val);
    }
    return 0;
}