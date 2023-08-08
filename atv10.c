#include <stdio.h>

int main() {
    char nome[100];
    int populacao, votos, result;
    float calc;

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);
    printf(" \n");
    printf("Digite o numero da populacao: \n");
    scanf("%i", &populacao);
    printf(" \n");
    printf("Digite o numero de votos nessa cidade: \n");
    scanf("%i", &votos);
    printf(" \n");
    printf("Resultado: \n");
    printf(" \n");

    calc = ((10.0*votos)/populacao);
    result = calc * 10;
    printf("a porcentagem de pessoas que votaram na cidade de %s e de %i%%!! \n",nome,result);
    return 0;
}
