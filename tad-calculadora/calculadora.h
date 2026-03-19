#ifndef CALCULADORA_H
#define CALCULADORA_H

typedef struct calculadora Calculadora;

Calculadora *criar(void);
void destruir(Calculadora *c);
void exibir(Calculadora *c);
void zerar(Calculadora *c);
void definir(Calculadora *c, float valor);
float obterMemoria(Calculadora *c);
void somar(Calculadora *c, float valor);
void subtrair(Calculadora *c, float valor);
void multiplicar(Calculadora *c, float valor);
int dividir(Calculadora *c, float valor);

#endif