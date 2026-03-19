#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

struct calculadora {
    float memoria;
};

Calculadora *criar(void) {
    Calculadora *c = (Calculadora *) malloc(sizeof(Calculadora));

    if (c != NULL) {
        c->memoria = 0.0f;
    }

    return c;
}

void destruir(Calculadora *c) {
    free(c);
}

void exibir(Calculadora *c) {
    if (c != NULL) {
        printf("Memoria atual: %.2f\n", c->memoria);
    }
}

void zerar(Calculadora *c) {
    if (c != NULL) {
        c->memoria = 0.0f;
    }
}

void definir(Calculadora *c, float valor) {
    if (c != NULL) {
        c->memoria = valor;
    }
}

float obterMemoria(Calculadora *c) {
    if (c != NULL) {
        return c->memoria;
    }
    return 0.0f;
}

void somar(Calculadora *c, float valor) {
    if (c != NULL) {
        c->memoria += valor;
    }
}

void subtrair(Calculadora *c, float valor) {
    if (c != NULL) {
        c->memoria -= valor;
    }
}

void multiplicar(Calculadora *c, float valor) {
    if (c != NULL) {
        c->memoria *= valor;
    }
}

int dividir(Calculadora *c, float valor) {
    if (c != NULL) {
        if (valor == 0.0f) {
            return 0;
        }
        c->memoria /= valor;
        return 1;
    }
    return 0;
}