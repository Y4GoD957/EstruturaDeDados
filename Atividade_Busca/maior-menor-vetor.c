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