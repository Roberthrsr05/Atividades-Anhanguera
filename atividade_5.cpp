/*
 Faça um programa em C++ que solicite ao usuário 
um número real e imprima o cubo este número*/

#include <cstdio>
int main(){
    float num, cubo;
    printf("Digite um numero para descobrimos o cubo: ");
    scanf("%f", &num);

    cubo = num * num * num;

    printf("O cubo de %.2f e igual a: %.2f\n", num, cubo);

    return 0;

}