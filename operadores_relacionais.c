#include <stdio.h>
int main(){
    // Aqui são declaradas as variáveis
    char produtoA[30] = "Celular Nokia";
    char produtoB[30] = "Computadores";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500;

    double valortotalA;
    double valortotalB;

    int resultadoA;
    int resultadoB;

    //Exibir informações dos produtos
    printf("O produto %s tem estoque de %u e custa R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("O produto %s tem estoque de %u e custa R$ %.2f\n", produtoB, estoqueB, valorB);
    
    // Compara o valor mínimo de estoque com o estoque atual
    resultadoA = estoqueA > estoqueminimoA;
    resultadoB = estoqueB > estoqueminimoB;
    

    printf("O produto %s tem estoque mínimo de %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo de %d\n", produtoB, resultadoB);

    //compara os valores totais dosa produtos x estoque
    printf("O valor total de %s (R$ %.2f) é maior que o total de %s (R$ %.2f)? %d\n\n\n", produtoA, 
    estoqueA * valorA, produtoB, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

    return 0;
}