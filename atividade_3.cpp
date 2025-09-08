/*Faça um programa em C++ que solicite ao usuário 
três números reais e imprima a soma e a média 
destes números.*/

#include <cstdio>
int main(){
    float num1, num2, num3, soma, media;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    soma = num1 + num2 + num3;
    media = soma /3;

    printf("O resultado da soma e: %.2f\n", soma);
    printf("\nA media da soma dos numero e: %.2f", media);
    return 0;
}