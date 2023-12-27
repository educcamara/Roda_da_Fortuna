#include <stdio.h>
//#include "interacao_usuario.h"

int main() {
    /*
    char x = random();

    printf(Esse eh seu valor inicial: x);

    printf(Gire a roleta!);
    roda_da_fortuna(&x);

    printf(Esse eh seu valor: x);
    char tentativas = 0;
    char continuar = 1;
    while (x < 3 && continuar) {
        printf(Deseja continuar?);
        scanf(%c%*c, &continuar);
        if (continuar == 's') {
            printf(Gire a roleta!);
            roda_da_fortuna(&x);
            printf(Esse eh seu valor: x);
        } else {
            printf(Ok, tchau!);
            continuar = 0;
        }
        tentativas++;
    }

     0 = 90 (mod 90)
     0 = -90 (mod 90)
     (-8 -7) % 16 = 1
    */
    printf("%d\n", -15 % 16);

    return 0;
}

