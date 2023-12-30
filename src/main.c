#include <stdio.h>
#include "funcoes_roda.h"
#include "interacao_usuario.h"

int main() {
    imprime_instrucoes();

    printf("Vamos jogar?(s/n)\n");

    if (!checar_input()) {
        return 0;
    }
    char sua_sorte = numero_aleatorio();

    printf("Esse eh seu valor inicial: %hhd\n", sua_sorte);

    printf("\nGira roleta gira!!\n\n");
    char fortuna_infortunio = roda_da_fortuna(sua_sorte);

    printf("Esse é seu resultado: %hhd\n", fortuna_infortunio);
    printf("Deseja continuar?(s/n)\n");
    char tentativas = 3;
    while (tentativas > 0 && checar_input()) {
        printf("Você tem %hhd tentativa(s) restante(s)\n", tentativas);
        fortuna_infortunio = roda_da_fortuna(fortuna_infortunio);
        imprime_resultado(fortuna_infortunio);

        if (tentativas != 1) {
            printf("Deseja continuar?(s/n)\n");
        }
        tentativas--;
    }
    printf("Obrigado por jogar!\n");

    return 0;
}

