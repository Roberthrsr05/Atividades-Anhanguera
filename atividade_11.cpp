/* Elabore um algoritmo em C++ que deixe o usuário entrar com o saldo de uma aplicação e imprima 
o novo saldo, considerando o reajuste de 2 %. */

#include <cstdio>
int main(){
float saldo, novoSaldo, emBanco;

printf("Digite seu saldo: ");
scanf("%f", &saldo);

novoSaldo = saldo * 1.03;

printf("Considerando o reajuste de 2%: %.2f\n", novoSaldo);

return 0;
}