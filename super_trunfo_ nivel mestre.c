#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

// Variáveis utilizadas.
int pturistico = 50, pturistico2 = 30;
char  pais[30], pais2[30];
float pib = 90.000,pib2 = 120.000, area = 30.000, area2 = 30.000, densidade, densidade2, percapita, percapita2;
float superpoder1, superpoder2, populacao = 600.000, populacao2 = 900.000;
int atributo1, atributo2, resultado1, resultado2;

//resolução dos cálculos carta 1 + super poder
densidade = (float) (populacao / area);
percapita = (float) (pib / populacao);
superpoder1 =  (float) (populacao + area + pib + pturistico + percapita - densidade);  

 //resolução do cáculo da carta 2 + super poder
 densidade2 = (float) (populacao2 / area2);
 percapita2 = (float) (pib2 / populacao2);
 superpoder2 =(float) (populacao2 + area2 + pib2 + pturistico2 + percapita2 - densidade2);

printf(" >>> JOGO DO SUPER TUNFO <<<\n\n");
   
    //Aqui, o usário insere as informações
    printf(">> Digite o País da Carta 1 <<\n");
    printf("Nome do País: ");
    scanf("%s", &pais);

    printf("\n>> Digite o País da Carta 2 <<\n");
    printf("Nome do País: ");
    scanf("%s", &pais2);
    
    printf("\nEscolha o primeiro atributo: \n");
    printf("1 - População\n");
    printf("2 - PIB\n");
    printf("3 - Área\n");
    printf("4 - Densidade populacional\n");
    printf("5 - PIB Percapita\n");
    printf("6 - Pontos turísticos: \n");
    printf("7 - Super poder\n");

    printf("Digite o primeiro atributo: ");
    scanf("%d", &atributo1);

    //Atributo escolhido:  
switch (atributo1){
    case 1:
    printf("Atributo escolhido: População.\n\n");
    printf("População %s: %f\n",pais, populacao); 
    printf("População %s: %f\n\n",pais2, populacao2); 
    resultado1 = populacao > populacao2 ? 1 : 0;
    break;

    case 2:
    printf("Atributo escolhido: PIB.\n\n");
    printf("PIB %s: %f\n", pais, pib); 
    printf("PIB %s: %f\n\n", pais2, pib2);
    resultado1 = pib > pib2 ? 1 : 0;
    break;

    case 3:
    printf("Atributo escolhido: Área.\n\n");
    printf("Área %s: %f\n", pais, area); 
    printf("Área %s: %f\n\n", pais2, area2);
    resultado1 = area > area2 ? 1 : 0;
    break;

    case 4:
    printf("Atributo escolhido: Densidade populacional.\n\n");
    printf("Dens. populacional %s: %f\n", pais, densidade); 
    printf("Dens. populacional %s: %f\n\n", pais2, densidade2);
    resultado1 = densidade < densidade2 ? 1 : 0;
    break;

    case 5:
    printf("Atributo escolhido: PIB percapita.\n\n");
    printf("PIB per capita %s: %f\n", pais, percapita); 
    printf("PIB per capita %s: %f\n\n", pais2, percapita2);
    resultado1 = percapita > percapita2 ? 1 : 0;
    break;

    case 6:
    printf("Atributo escolhido: Pontos Turísticos.\n\n");
    printf("Pontos turísticos %s: %d\n",pais, pturistico); 
    printf("Pontos turísticos %s: %d\n\n", pais2, pturistico2);
    resultado1 = pturistico > pturistico2 ? 1 : 0;
    break;

    case 7:
    printf("Atributo escolhido: Super poder.\n\n");
    printf("Super poderes %s: %f\n", pais, superpoder1); 
    printf("Super poderes %s: %f\n\n", pais2, superpoder2);
    resultado1 = superpoder1 > superpoder2 ? 1 : 0;
    break;

default:
    printf("\nOpção de jogo inválida!\n\n");
    break;
}   
    printf("Escolha o segundo atributo: \n");
    printf("1 - População\n");
    printf("2 - PIB\n");
    printf("3 - Área\n");
    printf("4 - Densidade populacional\n");
    printf("5 - PIB Percapita\n");
    printf("6 - Pontos turísticos: \n");
    printf("7 - Super poder\n");

    printf("Digite o segundo atributo: ");
    scanf("%d", &atributo2);

if (atributo1 == atributo2){
    printf("\nVocê escolheu o mesmo atributo.\n\n");

} else {
    switch (atributo2)
    {
    case 1:
    printf("Atributo escolhido: População\n\n");
    printf("População %s: %f\n", pais, populacao); 
    printf("População %s: %f\n\n", pais2, populacao2);
    resultado2 = populacao > populacao2 ? 1 : 0;
    break;

    case 2:
    printf("Atributo escolhido: PIB\n\n");
    printf("PIB %s: %f\n", pais, pib); 
    printf("PIB %s: %f\n\n", pais2, pib2);
    resultado2 = pib > pib2 ? 1 : 0;
    break;

    case 3:
    printf("Atributo escolhido: Área\n\n");
    printf("Área %s: %f\n", pais, area); 
    printf("Área %s: %f\n\n", pais2, area2);
    resultado2 = area > area2 ? 1 : 0;
    break;

    case 4:
    printf("Atributo escolhido: Densidade populacional\n\n");
    printf("Dens. populacional %s: %f\n", pais, densidade); 
    printf("Dens. populacional %s: %f\n\n", pais2, densidade2);
    resultado2 = densidade < densidade2 ? 1 : 0;
    break;

    case 5:
    printf("Atributo escolhido: PIB percapita\n\n");
    printf("PIB per capita %s: %f\n", pais, percapita); 
    printf("PIB per capita %s: %f\n\n", pais2, percapita2);
    resultado2 = percapita > percapita2 ? 1 : 0;
    break;

    case 6:
    printf("Atributo escolhido: Pontos Turísticos\n\n");
    printf("Pontos turísticos %s: %d\n", pais, pturistico); 
    printf("Pontos turísticos %s: %d\n\n", pais2, pturistico2);
    resultado2 = pturistico > pturistico2 ? 1 : 0;
    break;

    case 7:
    printf("Atributo escolhido: Super poder\n\n");
    printf("Super poderes %s: %f\n", pais, pib); 
    printf("super poderes %s: %f\n\n", pais2, pib2);
    resultado2 = superpoder1 > superpoder2 ? 1 : 0;
    break;

default:
    printf("Opção inválida!\n\n");
    break;
}
// Lógica do jogo
 
if (resultado1 && resultado2){
    printf("%s, venceu!!\n\n", pais);

} else if (resultado1 != resultado2){
    printf("%s e %s, empataram!\n\n", pais,pais2);

} else {
    printf("%s, Venceu!!\n\n", pais2);

}
     printf(">>>>>> FIM <<<<<<\n\n");
    

   return 0;
}
}

