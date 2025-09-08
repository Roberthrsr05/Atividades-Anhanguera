/*Faça um programa em C++ que solicite ao usuário 
um número e imprima o dobro deste número.*/

#include <cstdio>
int main(){
    int num1, dobro;
    printf("Digite um numero: ");
    scanf("%d", &num1);

    dobro = num1 *2;

    printf("O dobro e: %d", dobro);
    return 0;
}