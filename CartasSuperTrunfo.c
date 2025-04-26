#include <stdio.h>
int main() {
    int pturistico, pturistico2;
    char  estado[30], estado2[30], cidade[30], cidade2[30], codigo[30], codigo2[30]; 
    float pib,pib2, area,area2, densidade, densidade2, percapita, percapita2;
    float superpoder1, superpoder2, populacao, populacao2;

    printf(" >>> JOGO DO SUPER TUNFO <<<\n\n");

    //Aqui, o usário insere as informações da carta 01.
    printf(">> Insira as infromações da Carta 1 <<\n\n");

    printf("Estado: ");
    scanf("%s", &estado);

    printf("Código da Cidade: ");
    scanf("%s", &codigo);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade);
    
    printf("População: ");
    scanf("%f", &populacao);

    printf("Area em km²: ");
    scanf("%f", &area);

    printf("Informe o PIB: ");
    scanf("%f", &pib);

    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico);


    //Aqui, o usário insere as informações da carta 02.
    printf("\n\n>> Insira as infromações da Carta 2 <<\n\n");

    printf("Estado: ");
    scanf("%s" , &estado2);

    printf("Código da Cidade: ");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);
    
    printf("População: ");
    scanf("%f", &populacao2);

    printf("Area em km²: ");
    scanf("%f", &area2);
    
    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico2);

    //resolução dos cálculos carta 1 + super poder
    densidade = (float) (populacao / area);
    percapita = (float) (pib / populacao);
    superpoder1 =  (float) (populacao + area + pib + pturistico + percapita - densidade); 

    //O usuário recebe as informações impressas da carta 01.
    printf("\n\n>>> Carta 01 <<<\n\n");
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %s\n", codigo);
    printf("Nome: %s\n", cidade);
    printf("População: %.d\n", populacao);
    printf("Área territorial: %f kM²\n", area);
    printf("PIB: %f Bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pturistico);
    printf("Densidade Populacional: %.5f hab/km²\n", densidade);
    printf("PIB per Capita: %.5f reais\n\n", percapita);
    printf("SUPER PODER:%f\n", superpoder1);

    //resolução do cáculo da carta 2 + super poder
    densidade2 = (float) (populacao2 / area2);
    percapita2 = (float) (pib2 / populacao2);
    superpoder2 =  (float) (populacao2 + area2 + pib2 + pturistico2 + percapita2 - densidade2); 

    //O usuário recebe as informações impressas da carta 02.
    printf("\n\n>>> Carta 02 <<<\n\n");
    printf("Estado: %s\n", estado2);
    printf("Código da cidade: %s\n", codigo2);
    printf("Nome: %s\n", cidade2);
    printf("População: %.d\n", populacao2);
    printf("Área territorial: %f kM²\n", area2);
    printf("PIB: %f Bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pturistico2);
    printf("Densidade Populacional: %.5f hab/km²\n", densidade2);
    printf("PIB per Capita: %.5f reais\n\n", percapita2);
    printf("SUPER PODER:%f\n\n\n", superpoder2);

    //comparação entres as cartas 01 e 02
    printf(" COMPARAÇÃO ENTRE AS CARTAS\n\n");
    printf("População:%d\n", populacao > populacao2);
    printf("Área:%d\n", area > area2);
    printf("PIB:%d\n", pib > pib2);
    printf("Pontos Turísticos:%d\n", pturistico > pturistico2);
    printf("Desnidade Populacional:%d\n", densidade < densidade2);
    printf("PIB per capita:%d\n", percapita > percapita2);
    printf("Super Poder:%d\n\n", superpoder1 > superpoder2);


    printf(">>>>>> FIM <<<<<<\n\n\n\n");
    

   return 0;

}
