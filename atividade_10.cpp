/*Elabore um algoritmo em C++ que solicite o valor do salário de uma pessoa e seus gastos com as 
contas de Água, Luz, Telefone e Aluguel e após ter estes dados calcule qual o valor total destas 
contas e o valor que esta pessoa terá em caixa após estes pagamentos. */

#include <cstdio>
int main(){
    float salario, agua, luz, telefone, aluguel, saldoFinal;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Digite quanto voce paga em agua: ");
    scanf("%f", &agua);

    printf("Digite quanto voce paga em luz: ");
    scanf("%f", &luz);

    printf("Digite quanto voce paga na conta de telefone: ");
    scanf("%f", &telefone);

    printf("Digite quanto voce  paga de aluguel: ");
    scanf("%f", &aluguel);

    saldoFinal = salario - agua - luz - telefone - aluguel;

    printf("O saldo em caixa e de: %.2f\n", saldoFinal);

    return 0;
}