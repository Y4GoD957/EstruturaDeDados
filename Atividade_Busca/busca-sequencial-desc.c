#include <stdio.h>

int buscaSequencialDesc(int size, int v[], int val) {
    for (int i = size; i >= 0; i--){
        if(v[i] == val){
            return i;
        }
    }
    return -1;
}

int main (){
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, val;
    printf("Digite um valor: ");
    scanf("%d", &val);
    int pos = buscaSequencialDesc(v, 10, val);
    if (pos != -1) {
        printf ("O valor %d foi encontrado na posição %d\n", val, pos);
    } else {
        printf("O valor %d não foi encontrado\n", val);
    }
    return 0;
}