/*Faça um programa em C++ que solicite ao usuário 
dois números reais e imprima a soma destes 
números.*/

#include <cstdio>
int main(){
    int num1, num2, soma;
    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("O restultado da soma e: %d", soma);
    return 0;
}