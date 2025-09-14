/*Ivan tem um estacionamento e necessita de ajuda para calcular sua receita mensal. Faça um 
algoritmo que solicite ao Ivan quantos clientes ele tem em seu estacionamento e qual o valor da 
mensalidade e calcule sua receita mensal.*/

#include <cstdio>
int main(){
    float receitamensal, valordamensalidade;
    int clientes;

    printf("Quantos clientes tem utilizando o estacionamento: ");
    scanf("%d", &clientes);

    printf("O valor da mensalidade e: ");
    scanf("%f", &valordamensalidade);

    receitamensal = clientes * valordamensalidade;

    printf("A receita final de ivan e: %.2f\n", receitamensal);

    return 0;
}