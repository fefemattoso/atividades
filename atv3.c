#include <stdio.h>

int main(){
   char nome[100]; 
    int salario, porcentagem;
    float aumento, resultado;

  	printf("Digite o seu nome: \n");
    scanf("%s", nome); 
    printf(" \n");
    printf("Digite o seu salario: \n");
    scanf("%d", &salario);
    printf(" \n");
    printf("Digite o aumento em porcentagem (%%): \n");
    scanf("%d", &porcentagem);
    printf(" \n");
    printf("Resultado: \n");
    printf(" \n");

    aumento = porcentagem / 100.0; 
    resultado = salario + (salario * aumento);

    printf("%s tera um salario de %.2f R$ com esse aumento!! \n", nome, resultado);
    return 0;
}	
