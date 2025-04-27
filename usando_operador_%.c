#include <stdio.h>
    int main(){

     int numero;
    printf("Digite o numero para saber se é par ou impar\n");
    scanf("%i", &numero);

    if (numero % 2 == 0){
        printf("O numero é par.\n");
    }
        else {
        printf("O numero é impar\n\n.");
    }


    }