#include "funcoes_roda.h"

char numero_aleatorio() {
    srand(time(NULL));
    return (char) ((rand() % 16) - 8);
}

void roda_da_fortuna(char *x) {
    char sua_sorte = numero_aleatorio();
    *x += sua_sorte;
    if (*x < -8) {
        *x += 16;
    } else if (*x > 7) {
        *x -= 16;
    }
}

/*
 * 0b1001 1101
 * & 0b0000 1111
 * = 0b0000 1101
 */
