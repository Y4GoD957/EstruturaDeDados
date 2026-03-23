void maiorMenor(int v[], int size) {
    int maior = v[0];
    int menor = v[0];
    for (int i = 1; i < size; i++) {

        if (v[i] > maior) {
            maior = v[i];
        }
        if (v[i] < menor) {
            menor = v[i];
        }
    }
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
}

int main() {
    int v[10] = {3, 7, 2, 7, 5, 7, 9, 1, 4, 7};
    maiorEMenor(v, 10);
    return 0;
}