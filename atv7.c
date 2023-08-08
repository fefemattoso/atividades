#include <stdio.h>

int main() {
    int caminhao, alqueire, viagens;
    
    printf("Digite quantos caminhoes a fazenda possui: \n");
    scanf("%i", &caminhao);
    printf(" \n");
    printf("Digite quantos alqueires a fazenda possui: \n");
    scanf("%i", &alqueire);
    printf(" \n");
    printf("Resultado: \n");
    printf(" \n");
    
    viagens = (alqueire * 250) / (caminhao * 18);
    
    printf("sera necessario cerca de %i viagens para cada um dos caminhoes! \n", viagens);
     return 0;
}
