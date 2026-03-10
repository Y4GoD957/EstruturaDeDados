int ultimaOcorrencia(int v[], int size, int val) {
    int indice = -1;
    for (int i = 0; i < size; i++) {
        if (v[i] == val) {
            indice = i;
        }
    }
    return indice;
}