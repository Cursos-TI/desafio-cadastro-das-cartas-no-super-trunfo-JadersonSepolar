#include <stdio.h>
int main(){

// variáveis utilizadas
int i = 1;


while (i <= 5){
     printf("Direita.\n");//torre: 5 casas para direita
     i++;
}
 i = 1;
do {
    printf("Cima,Direita.\n");//Bispo: 5 casas direita diagonal para cima
    i++;
    } while (i <= 5);


for (i = 0; i < 8; i++)
{
    printf("Esquerda.\n");// Rainha: 8 casas a esquerda
}

    return 0;
}
