#include <stdio.h>

int main() {
   char mercadoria[100]; 
    int preco;
    float  result, aumento;

    printf("Digite o nome da mercadoria: \n");
    scanf("%s", mercadoria); 
    printf(" \n");
    printf("Digite o preco: \n");
    scanf("%d", &preco);
    printf(" \n");
    printf("Resultado: \n");
    printf(" \n");
    
    aumento = preco * 0.05;
    result = preco + aumento;

    printf("%s valera %.2f R$ com um aumento de 5%! \n", mercadoria, result);
    return 0;
}
