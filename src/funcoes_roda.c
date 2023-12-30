#include "funcoes_roda.h"

char numero_aleatorio() {
    srand(time(NULL));
    return (char) ((rand() % 16) - 8);
}

char roda_da_fortuna(char sua_sorte) {
    char fortuna_infortunio = numero_aleatorio();
    fortuna_infortunio += sua_sorte;
    if (fortuna_infortunio < -8) {
        fortuna_infortunio += 16;
    } else if (fortuna_infortunio > 7) {
        fortuna_infortunio -= 16;
    }

    return fortuna_infortunio;
}
