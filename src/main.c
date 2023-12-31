#include <stdio.h>
#include "funcoes_roda.h"
#include "interacao_usuario.h"

int main() {
    imprime_instrucoes();

    printf("Vamos jogar?(s/n)\n");
    // Se o usuário não quiser jogar, o programa termina
    if (!checar_input()) {
        return 0;
    }
    // Inicializa o valor inicial
    char sua_sorte = numero_aleatorio();

    printf("Esse eh seu valor inicial: %hhd\n", sua_sorte);

    printf("\nGira roleta gira!!\n\n");
    char fortuna_infortunio = roda_da_fortuna(sua_sorte);
    //variável de retorno do jogo

    printf("Esse é seu resultado: %hhd\n", fortuna_infortunio);
    imprime_resultado(fortuna_infortunio);

    char tentativas = 3;
    printf("Você tem %hhd tentativa(s) restante(s)\n", tentativas);
    printf("Deseja continuar?(s/n)\n");

    // Enquanto tiver tentativas e o usuário quiser continuar, o programa continua
    while (tentativas > 0 && checar_input()) {
        fortuna_infortunio = roda_da_fortuna(sua_sorte);
        imprime_resultado(fortuna_infortunio);

        tentativas--;
        printf("Você tem %hhd tentativa(s) restante(s)\n", tentativas);

        // Enquanto tiver tentativas, o programa pergunta ao usuário se quer continuar
        if (tentativas > 0) {
            printf("Deseja continuar?(s/n)\n");
        }
    }
    printf("\nSeu valor final é %hhd.\nObrigado por jogar!\n", fortuna_infortunio);

    return 0;
}

