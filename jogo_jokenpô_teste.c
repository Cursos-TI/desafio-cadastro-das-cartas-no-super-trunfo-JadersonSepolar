#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){

//variáveis utilizadas.
int escolhajogador, escolhacomputador;
srand(time(0));

//Inserção de dados pelo usuário
printf("*** JOGO JOKENPÔ***\n\n");
printf("Escolha uma opção:\n");
printf("1 - PEDRA\n");
printf("2 - PAPEL\n");
printf("3 - TESOURA\n");
printf("ESCOLHA: ");
scanf("%d", &escolhajogador);

escolhacomputador = rand() % 3 + 1;

switch (escolhajogador){
    case 1:
    printf("jogador - Pedra \n");
    break;

    case 2:
    printf("Jogador - Papel \n");
    break;

    case 3:
    printf("Jogador - Tesoura \n");
    break;

default:
    printf("Opção inválida!\n");
    break;
}

switch (escolhacomputador){
    case 1:
    printf("Computador: Pedra\n\n");
    break;

    case 2:
    printf("Computador: Papel\n\n");
    break;

    case 3:
    printf("Computador: Tesoura\n\n");
    break;
}
// lógica do jogo

if (escolhacomputador == escolhajogador){
    printf("*** O jogo Empatou! ***\n");
} else if ((escolhajogador == 1) && (escolhacomputador == 3)||
           (escolhajogador == 2) && (escolhacomputador == 1)||
           (escolhajogador == 3) && (escolhacomputador == 2)){
    printf("*** Parabéns! Você ganhou.\n\n");
} else {
    printf("*** Você perdeu! ***\n\n");
}
}