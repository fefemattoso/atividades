#include <stdio.h>
int main(){
	//Declara��o de vari�veis
	int a, b, c, x;
	// Entrada
	printf("Digite tr�s n�meros inteiros:");
	scanf("%d %d %d", &a, &b, &c);
	//Processamento
	x = (a + b) / c;
	//Sa�da
	printf("a = %d\n b = %d\n c = %d\n", a, b, c);
	printf("O resultado da express�o (a + b) / c = %d", x);
	return 0;
	
}
