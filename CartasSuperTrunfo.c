#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int pturistico;
    char  estado[50], cidade[30], codigo[10]; 
    float pib, area, populacao;

    //Aqui, o usário insere as informações da carta 01.
    printf(">> Insira as infromações da Carta 1 <<\n\n");

    printf("Estado:");
    scanf("%c", &estado);

    printf("Código da Cidade:");
    scanf("%s", &codigo);

    printf("Nome da Cidade:");
    scanf("%s", &cidade);
    
    printf("Número de habitantes:");
    scanf("%f", &populacao);

    printf("Area em km²:");
    scanf("%f", &area);

    printf("Informe o PIB:");
    scanf("%f", &pib);

    printf("Quantidade de Pontos Turísticos:");
    scanf("%i", &pturistico);

    //Aqui, o usário insere as informações da carta 02.
    printf(">> Insira as infromações da Carta 2 <<\n\n");

    printf("Estado:");
    scanf("%c", &estado);

    printf("Código da Cidade:");
    scanf("%s", &codigo);

    printf("Nome da Cidade:");
    scanf("%s", &cidade);
    
    printf("Número de habitantes:");
    scanf("%f", &populacao);

    printf("Area em km²:");
    scanf("%f", &area);

    printf("Informe o PIB:");
    scanf("%f", &pib);

    printf("Quantidade de Pontos Turísticos:");
    scanf("%i", &pturistico);

    //O usuário recebe as informações impressas da carta 02.
    printf("\n\n>>> Carta 2 <<<\n\n");
    printf("Estado:%c\n", estado);
    printf("Código da cidade:%s\n", codigo);
    printf("Nome:%s\n", cidade);
    printf("Habitantes:%i\n", populacao);
    printf("Área territorial:%f kM²\n", area);
    printf("PIB:%f Bilhões de reais\n", pib);
    printf("Pontos turísticos:%i\n", pturistico);

    //O usuário recebe as informações impressas da carta 02.
    printf("\n\n>>> Carta 2 <<<\n\n");
    printf("EStado:%c\n", estado);
    printf("Código da cidade:%s\n", codigo);
    printf("Nome:%s\n", cidade);
    printf("Habitantes:%i\n", populacao);
    printf("Área territorial:%f kM²\n", area);
    printf("PIB:%f Bilhões de reais\n", pib);
    printf("Pontos turísticos:%i\n", pturistico);




    return 0;

}
