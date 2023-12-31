#include "interacao_usuario.h"

/**
 * @brief Imprime as instruções do jogo
 */
void imprime_instrucoes() {
    printf("RODA DA FORTUNA (OU INFORTUNIO)\n"
           "###############################\n\n"
           "Neste jogo, você inicia com um valor entre -8 e 7.\n"
           "Depois de uma girada obrigatória, o jogador possui mais 3 chances de girar a roleta com esses mesmos valores.\n"
           "Soma-se então o valor da roleta com o valor inicial do jogador.\n"
           "O objetivo do jogo é obter um resultado positivo.\n\n");
}

/**
 * @brief Imprime o resultado do jogo
 *
 * Essa função imprime o resultado do jogo, que pode ser positivo ou negativo.
 * Quando é positivo, imprime "Fortuna! " seguido do resultado. Caso contrário, imprime "Infortúnio! " seguido do resultado.
 *
 * @param resultado Resultado do jogo
 */
void imprime_resultado(char resultado) {
    if (resultado >= 0) {
        printf("Fortuna! %hhd\n", resultado);
    } else {
        printf("Infortúnio! %hhd\n", resultado);
    }
}

/**
 * @brief Checa o input do usuário
 *
 * Essa função checa o input do usuário em interações que ele deve decidir entre "Sim" ou "Não".
 * Caso o input seja 's', retorna 1. Caso contrário, retorna 0.
 *
 * @return 1 se o input for 's', 0 caso contrário
 */
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

