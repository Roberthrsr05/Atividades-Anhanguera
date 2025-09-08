/* Faça um programa em C++ que solicite ao usuário 
dois números e imprima o resto da divisão do 
segundo pelo primeiro número.*/

#include <cstdio>
int main(){
    int num1, num2, resto;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    resto = num2 % num1;

    printf("Resultado do resto da divisao e: %d\n", resto);
    return 0;
}