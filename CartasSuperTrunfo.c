#include <stdio.h>
// Desafio Super Trunfo - Países
// Cadastro das Cartas

int main() {
    int pturistico, pturistico2;
    char  estado[50], estado2[30], cidade[30], cidade2[30], codigo[30], codigo2[30]; 
    float pib,pib2, area,area2, populacao, populacao2, densidade, densidade2, percapita, percapita2;

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

    //resolução dos cálculos carta 1
    densidade = (float) (populacao / area);
    percapita = (float) (pib / populacao);

    //O usuário recebe as informações impressas da carta 01.
    printf("\n\n>>> Carta 1 <<<\n\n");
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %s\n", codigo);
    printf("Nome: %s\n", cidade);
    printf("População: %.5f\n", populacao);
    printf("Área territorial: %f kM²\n", area);
    printf("PIB: %f Bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pturistico);
    printf("Densidade Populacional: %.5f hab/km²\n", densidade);
    printf("PIB per Capita: %.5f reais\n\n\n", percapita);
    
    //resolução do cáculo da carta 2
    densidade2 = (float) (populacao2 / area2);
    percapita2 = (float) (pib2 / populacao2);

    //O usuário recebe as informações impressas da carta 02.
    printf("\n\n>>> Carta 2 <<<\n\n");
    printf("Estado: %s\n", estado2);
    printf("Código da cidade: %s\n", codigo2);
    printf("Nome: %s\n", cidade2);
    printf("População: %.5f\n", populacao2);
    printf("Área territorial: %f kM²\n", area2);
    printf("PIB: %f Bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pturistico2);
    printf("Densidade Populacional: %.5f hab/km²\n", densidade2);
    printf("PIB per Capita: %.5f reais\n", percapita2);




    return 0;

}
