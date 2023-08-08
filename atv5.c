#include <stdio.h>

int main() {

     int numero, numeroMenos, numeroMais;

    	printf("Digite um numero positivo e diferente de zero: \n");
    	printf(" \n");

    if (scanf("%d", &numero) == 1 && numero > 0) {
        numeroMais = numero + 1;
        numeroMenos = numero - 1;
        
        printf(" \n");
        printf("Resultado: \n");
        printf(" \n");
        printf("%i + 1 = %i / %i - 1 = %i \n", numero, numeroMais, numero, numeroMenos);
    } else {
        printf("Numero invalido !! \n");
    }

    return 0;
}
