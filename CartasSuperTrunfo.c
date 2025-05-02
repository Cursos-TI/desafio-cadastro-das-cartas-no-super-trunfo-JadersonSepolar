#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    //variáveis utilizadas.
    int pturistico = 50, pturistico2 = 30;
    char  pais[30], pais2[30];
    float pib = 90.000,pib2 = 120.000, area = 30.000, area2 = 30.000, densidade, densidade2, percapita, percapita2;
    float superpoder1, superpoder2, populacao = 600.000, populacao2 = 900.000;
    int atributoescolhido;

    printf(" >>> JOGO DO SUPER TUNFO <<<\n\n");
   
    //Aqui, o usário insere as informações
    printf(">> Digite o País da Carta 1 <<\n");
    printf("Nome do País: ");
    scanf("%s", &pais);

    printf("\n>> Digite o País da Carta 2 <<\n");
    printf("Nome do País: ");
    scanf("%s", &pais2);
    
    printf("\nEscolha um atributo abaixo: \n");
    printf("1 - População\n");
    printf("2 - PIB\n");
    printf("3 - Área\n");
    printf("4 - Densidade populacional\n");
    printf("5 - PIB Percapita\n");
    printf("6 - Pontos turísticos: \n");
    printf("7 - Super poder\n\n");
    printf("Digite o atributo: ");
    scanf("%d", &atributoescolhido);

    //resolução dos cálculos carta 1 + super poder
    densidade = (float) (populacao / area);
    percapita = (float) (pib / populacao);
    superpoder1 =  (float) (populacao + area + pib + pturistico + percapita - densidade);  

    //O usuário recebe as informações
    printf("\n\nInformações da disputa\n");
    printf("Carta 1: %s\n", pais);
    printf("Carta 2: %s\n", pais2);
    printf("Atributo escolhido: ", atributoescolhido);
      
    //resolução do cáculo da carta 2 + super poder
    densidade2 = (float) (populacao2 / area2);
    percapita2 = (float) (pib2 / populacao2);
    superpoder2 =(float) (populacao2 + area2 + pib2 + pturistico2 + percapita2 - densidade2);

    //Atributo escolhido:  
switch (atributoescolhido){
    case 1:
    printf("População\n\n");
    break;

    case 2:
    printf("PIB\n\n");
    break;

    case 3:
    printf("Área\n\n");
    break;

    case 4:
    printf("Densidade populacional\n\n");
    break;

    case 5:
    printf("PIB percapita\n\n");
    break;

    case 6:
    printf("Pontos Turísticos\n\n");
    break;

default:
    printf("Super poder\n\n");

// Lógica do jogo
} if (atributoescolhido == 1){
    printf("%s: %f\n",pais, populacao);
    printf("%s: %f\n\n",pais2,populacao2);
    printf("%s é o vencedor!\n\n ",pais2);

} if (atributoescolhido == 2){
    printf("%s: %f\n",pais, pib);
    printf("%s: %f\n\n",pais2,pib2);
    printf("%s é o vencedor!\n\n ",pais2);

} if (atributoescolhido == 3){
    printf("%s: %f\n", pais, area);
    printf("%s: %f\n\n",pais2, area2);
    printf("%s e ",pais);
    printf("%s empataram!\n\n", pais2);

} if (atributoescolhido == 4){
    printf("%s: %f\n", pais, densidade);
    printf("%s: %f\n\n",pais2, densidade2);
    printf("%s é o vencedor!\n\n", pais);

} if (atributoescolhido == 5){
    printf("%s: %f\n", pais, percapita);
    printf("%s: %f\n\n",pais2, percapita2);
    printf("%s é o vencedor!\n\n", pais);

} if (atributoescolhido == 6){
    printf("%s: %d\n", pais, pturistico);
    printf("%s: %d\n\n",pais2, pturistico2);
    printf("%s é o vencedor!\n\n", pais);

} if (atributoescolhido == 7){
    printf("%s: %f\n", pais, superpoder1);
    printf("%s: %f\n\n",pais2, superpoder2);
    printf("%s é o vencedor!\n\n", pais2);
}

    printf(">>>>>> FIM <<<<<<\n\n");
    

   return 0;

    }
