#include <stdio.h>
int main(){

    //Variaveis utilizadas
    float temperatura, umidade;
    unsigned int estoque, estoqueminimo = 1000;

    //entrada de dados
    printf("Informe a Temperatura:\n");
    scanf("%f", &temperatura);
    printf("Informe a umidade:\n");
    scanf("%f", &umidade);
    printf("Informe o estoque:\n");
    scanf("%i", &estoque);
    
    //Lógica do programa
if (temperatura > 30){
    printf("Temperatura esta alta\n");

    } else {
        printf("Temperatura está dentro dos parâmentros.\n");
    }

if (umidade > 50 ){
printf("Umidade elevada\n");

} else {
    printf("Umidade está dentro dos parâmetros\n");
}
if (estoque < estoqueminimo){
    printf("O estoque está abaixo do mínimo.\n");
} else {
    printf("O Estoque está normal\n");
}
}
