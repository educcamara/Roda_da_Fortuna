#include <stdio.h>
//#include "interacao_usuario.h"

int main() {
    char sua_sorte;

    printf("RODA DA FORTUNA (OU INFORTUNIO)\n"
            "Neste jogo, você inicia com um valor entre -8 e 7.\n"
            "Após isso, o jogador possui 3 chances de girar uma roleta com esses mesmos valores,\n"
            "sendo a primeira vez obrigatória. Soma-se então o valor da roleta com o valor inicial\n"
            "do jogador. O objetivo do jogo é obter um resultado positivo. Vamos jogar?\n");



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
    return 0;
}

