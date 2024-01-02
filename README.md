# Roda da Fortuna

Esse é o diretório da Atividade 2 de Sistemas Lógicos 2023/2. Esse projeto é feito pela dupla 
Eduardo Cordeiro da Camara e André Yudji Silva Okimoto.

## Índice

- [Complemento de 2](#complemento-de-2)
- [Sobre o Jogo](#sobre-o-jogo)

## Complemento de 2

Nesse trabalho, foi praticado o conceito de *complemento de 2*. Essa representação de números é utilizada
pelos computadores modernos para representar números com sinal. Isso facilita fazer operações
usando inteiros na máquina.

### Overflow

Como o complemento de 2 é uma representação usando espaços finitos de memória, existe um intervalo que pode ser representado
usando essa notação. Por exemplo, se temos 8 bits, podemos representar do número -128 até 127 (note as proximidades com
potências de 2). 

Entretanto, se for realizado uma operação que ultrapasse esse intervalo, acontece o chamado *overflow*. Como aquele
endereço de memória não pode representar esse número, o bit extra não é considerado na formatação do elemento,
então é descartado, realizando-se um ciclo. Se somarmos 1 + 127 (no intervalo do exemplo anterior), obteremos
-128. Então, os números em complemento de 2 formam uma espécie de relógio, pois inicia no menor valor e quando chega
no maior valor, ele reinicia seu ciclo pelo menor.

## Sobre o Jogo

*Roda da Fortuna* ou *Infortúnio* é um jogo de sorte e azar, onde o jogador gira uma roleta e recebe um valor aleatório.
Caso o jogador não goste do valor recebido, ele terá mais três tentativas para mudar. A primeira sempre é obrigatória, ou seja,
independente do valor recebido, o jogador terá que trocar. Caso o valor seja positivo, ele ganha. Caso contrário, ele perde.


Note que o intervalo de -8 e 7 representa um intervalo em complemento de 2 com 4 bits. Dessa forma, toda vez
que acontece um *overflow*, deve-se imaginar uma roleta com esses números em ordem de bits. Quando somamos um valor
ao inicial, ele pode assumir um valor diferente do esperado. Por exemplo, se seu inicial fosse 5 e na roleta obtesse
4, a soma dos dois daria 9. Mas como há *overflow*, torna-se -7.

### Passo a Passo

1. O jogador recebe o valor inicial e obrigatoriamente terá que trocar o valor recebido.
2. Por meio da função `roda_da_fortuna()`, o jogador recebe um valor aleatório entre -8 e +7 (inclusivo),
que será guardado na variável `fortuna_infortunio`.
3. Apresentando o novo valor, o jogador escolhe se ele quer jogar novamente ou não. 
Nisso, ele terá mais três tentativas.
4. Para cada tentativa, o jogo apresenta o valor recebido, e diz "Fortuna" ou "Infortúnio", 
dependendo se o valor é positivo ou negativo.
5. Assim que as tentativas acabarem ou o jogador decidir parar, 
o jogo finaliza, mostrando o valor final em `fortuna_infortunio`.
