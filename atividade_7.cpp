/* Faça um algoritmo em C++ que pergunte ao usuário a sua idade e levando em conta que um ano 
tem 365 dias, imprima quantos dias ele já viveu.*/
#include <cstdio>
int main(){
    int idade,dias;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    dias = idade * 365;

    printf("voce ja viveu aproximadamente: %d Dias.\n", dias);
    return 0;
}