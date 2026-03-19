#include <stdio.h>
#include "calculadora.h"

int main(void) {
    Calculadora *calc = criar();
    float numero;
    char operacao;
    char continuar;

    if (calc == NULL) {
        printf("Erro ao criar a calculadora.\n");
        return 1;
    }

    printf("=== CALCULADORA COM MEMORIA ===\n");

    printf("Selecione o primeiro numero: ");
    scanf("%f", &numero);
    definir(calc, numero);

    do {
        printf("\nMemoria atual: %.2f\n", obterMemoria(calc));

        printf("Selecione a operacao (+, -, *, /) ou z para zerar a memoria: ");
        scanf(" %c", &operacao);

        if (operacao == 'z' || operacao == 'Z') {
            zerar(calc);
            printf("Memoria zerada.\n");
            printf("Selecione um novo numero: ");
            scanf("%f", &numero);
            definir(calc, numero);
            continue;
        }

        printf("Digite o proximo numero: ");
        scanf("%f", &numero);

        switch (operacao) {
            case '+':
                somar(calc, numero);
                break;

            case '-':
                subtrair(calc, numero);
                break;

            case '*':
                multiplicar(calc, numero);
                break;

            case '/':
                if (!dividir(calc, numero)) {
                    printf("Erro: divisao por zero nao e permitida.\n");
                }
                break;

            default:
                printf("Operacao invalida.\n");
                break;
        }

        printf("Resultado armazenado na memoria: %.2f\n", obterMemoria(calc));

        printf("Deseja continuar calculando com a memoria atual? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar == 'n' || continuar == 'N') {
            printf("Deseja iniciar uma nova conta? (s/n): ");
            scanf(" %c", &continuar);

            if (continuar == 's' || continuar == 'S') {
                printf("Selecione o primeiro numero: ");
                scanf("%f", &numero);
                definir(calc, numero);
                continuar = 's';
            }
        }

    } while (continuar == 's' || continuar == 'S');

    destruir(calc);
    return 0;
}