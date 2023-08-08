#include <stdio.h>

int main(){
    char nome[100];
    int vitorias, empates, result;

    printf("Digite o nome do seu time: \n");
    scanf("%s", nome);
    printf(" \n");
    printf("Digite o numero de vitorias do seu time: \n");
    scanf("%d", &vitorias);
    printf(" \n");
    printf("Digite o numero de empates do seu time: \n");
    scanf("%d", &empates);
    printf(" \n");
    printf("Resultado: \n");
    printf(" \n");

    result = (vitorias*3) + empates;

    printf("O time %s esta com %d pontos!! \n",nome ,result);
    return 0;
}
