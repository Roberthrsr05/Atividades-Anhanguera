/*Em um prêmio de loteria tivemos vários ganhadores. Faça um algoritmo que solicite ao usuário o 
valor do prêmio da loteria e a quantidade de ganhadores deste concurso e calcule e imprima o valor 
que cada ganhador irá receber. */
#include <cstdio>
int main(){
    float premio, valorCada;
    int ganhadores;

    printf("Digite o valor do premio: ");
    scanf("%f", &premio);

    printf("Numero de Ganhadores: ");
    scanf("%d", &ganhadores);

    valorCada = premio / ganhadores;

    printf("Cada jogador vai ganhar: %f\n", valorCada);
    return 0;
}