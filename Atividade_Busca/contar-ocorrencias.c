#include <stdio.h>

int contarOcorrencias(int v[], int size, int val) {
    int contador = 0;
    for (int i = 0; i < size; i++) {
        if (v[i] == val) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int v[10] = {3, 7, 2, 7, 5, 7, 9, 1, 4, 7};
    int val;
    printf("Digite um valor para buscar: ");
    scanf("%d", &val);
    int ocorrencias = contarOcorrencias(v, 10, val);
    printf("O valor %d aparece %d vez(es) no vetor.\n", val, ocorrencias);
    return 0;
}