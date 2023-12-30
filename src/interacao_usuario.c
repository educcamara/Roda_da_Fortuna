//
// Created by Eduardo Cordeiro da Camara on 12/26/23.
//

#include "interacao_usuario.h"

void imprime_instrucoes() {
    printf("RODA DA FORTUNA (OU INFORTUNIO)\n"
           "###############################\n\n"
           "Neste jogo, você inicia com um valor entre -8 e 7.\n"
           "Depois de uma girada obrigatória, o jogador possui mais 3 chances de girar a roleta com esses mesmos valores.\n"
           "Soma-se então o valor da roleta com o valor inicial do jogador.\n"
           "O objetivo do jogo é obter um resultado positivo.\n\n");
}

void imprime_resultado(char resultado) {
    if (resultado >= 0) {
        printf("Fortuna! %hhd\n", resultado);
    } else {
        printf("Infortúnio! %hhd\n", resultado);
    }
}

char checar_input() {
    char input;
    printf(" > ");
    scanf("%c%*c", &input);

    if (input == 's') {
        return 1;
    }
    printf("Ok, tchau!\n");
    return 0;
}

