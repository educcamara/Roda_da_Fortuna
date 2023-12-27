# Roda da Fortuna

Esse é o diretório da Atividade 2 de Sistemas Lógicos 2023/2. Esse projeto é feito pela dupla 
Eduardo Cordeiro da Camara e André Yudji Silva Okimoto.

## Índice

- [Sobre o Jogo](#sobre-o-jogo)

## Sobre o Jogo

*Roda da Fortuna* ou *Infortúnio* é um jogo de sorte e azar, onde o jogador gira uma roleta e recebe um valor aleatório.
Caso o jogador não goste do valor recebido, ele terá mais três tentativas para mudar. A primeira sempre é obrigatória, ou seja,
independente do valor recebido, o jogador terá que trocar. Caso o valor seja positivo, ele ganha. Caso contrário, ele perde.

### Passo a Passo

1. Por meio da função `roda_da_fortuna()`, o jogador recebe um valor aleatório entre -8 e +7 (inclusivo), 
que será guardado na variável `fortuna_infortunio`.
2. Apresentando o valor inicial, o jogador obrigatoriamente terá que trocar o valor recebido.
3. Apresentando o novo valor, o jogador escolhe se ele quer jogar novamente ou não. 
Nisso, ele terá mais três tentativas.
4. Para cada tentativa, o jogo apresenta o valor recebido, e diz "Fortuna" ou "Infortúnio", 
dependendo se o valor é positivo ou negativo.
5. Assim que as tentativas acabarem ou o jogador decidir parar, 
o jogo apresenta finaliza, mostrando o valor final em `fortuna_infortunio`.
