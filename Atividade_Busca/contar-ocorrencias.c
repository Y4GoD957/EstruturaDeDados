int contarOcorrencias(int v[], int size, int val) {
    
    int contador = 0;

    for (int i = 0; i < size; i++) {
        if (v[i] == val) {
            contador++;
        }
    }

    return contador;
}