#include "funcoes_roda.h"

/**
 * @brief Gera um número aleatório entre -8 e 7
 *
 * Essa função utiliza a função rand() da biblioteca stdlib.h
 * para gerar um número aleatório entre 0 e 15, e então subtrai 8.
 *
 * Note que foi representado os números em binário, para evidenciar
 * o uso de complemento de 2.
 *
 * 0b10000 == 16;
 * 0b1000 == 8;
 *
 * @return char
 */
char numero_aleatorio() {
    srand(time(NULL));
    return (char) ((rand() % 0b10000) - 0b1000);
}

/**
 * @brief Simula uma roda da fortuna.
 *
 * Esta função gera um número aleatório usando a função numero_aleatorio(), que
 * adiciona o valor de entrada a ele. Em seguida, ajusta o resultado para estar dentro do intervalo de -8 a 7.
 *
 * Se o resultado for menor que -8, ele soma 16.
 * Se o resultado for maior que 7, ele subtrai 16.
 *
 * Note que foi representado os números em binário, para evidenciar
 * o uso de complemento de 2.
 *
 * 0b10000 == 16;
 * 0b1000 == 8;
 * 0b111 == 7;
 *
 * @param sua_sorte O valor de entrada a ser adicionado ao número aleatório.
 * @return O resultado final após todos os ajustes, que estará dentro do intervalo de -8 a 7.
 */
char roda_da_fortuna(char sua_sorte) {
    char fortuna_infortunio = numero_aleatorio();
    fortuna_infortunio += sua_sorte;
    if (fortuna_infortunio < -0b1000) {
        fortuna_infortunio += 0b10000;
    } else if (fortuna_infortunio > 0b111) {
        fortuna_infortunio -= 0b10000;
    }

    return fortuna_infortunio;
}



