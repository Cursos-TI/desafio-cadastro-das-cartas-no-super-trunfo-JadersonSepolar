#include <stdio.h>
int main(){
    //criei as variáveis utilizadas
    float nota1, nota2,nota3,resultado;

    //inseri valores para as variáveis
    printf("Digite suas notas abaixo\n\n");
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);
    
    //execução da lógica

    resultado = (float) (nota1 + nota2 + nota3)/3;
    printf("Sua média final é: %.2f\n\n", resultado);

    //usando a função if e else ( se, senão).

if (resultado >= 60) {
   printf("Você foi aprovado.\n\n");
}
    else {
    printf("Você foi reprovado.\n\n");
}


}