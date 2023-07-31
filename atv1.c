#include <stdio.h>
int main(){
	//Declaração de variáveis
	int a, b, c, x;
	// Entrada
	printf("Digite três números inteiros:");
	scanf("%d %d %d", &a, &b, &c);
	//Processamento
	x = (a + b) / c;
	//Saída
	printf("a = %d\n b = %d\n c = %d\n", a, b, c);
	printf("O resultado da expressão (a + b) / c = %d", x);
	return 0;
	
}
