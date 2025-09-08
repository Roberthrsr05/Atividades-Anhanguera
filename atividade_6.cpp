/* Faça um algoritmo em C++ que solicite ao usuário o seu salário e o valor que ele gasta em conta 
de agua e conta de luz e imprima o total dos seus gastos e o valor que sobra no final do mês do seu 
salário já descontando os gastos.  */

#include <cstdio>

int main() {
    float salario, luz, agua, restosalario, totalgastos;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Digite o valor da sua conta de luz: ");
    scanf("%f", &luz);

    printf("Digite o valor da sua conta de agua: ");
    scanf("%f", &agua);

    totalgastos = luz + agua;
    restosalario = salario - totalgastos;

    printf("Total de gastos: %.2f\n", totalgastos);
    printf("O que sobra para voce e: %.2f\n", restosalario);

    return 0;
}
