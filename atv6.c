#include <stdio.h>

int main() {

  float velocidade, distancia;
  velocidade = 900;
  
  printf("Digite a sua distancia (km): \n");
  scanf("%f", &distancia);
  printf(" \n");
  printf("Resultado: \n");
  printf(" \n");
  float calc = distancia/velocidade;
  printf("Voce ira demorar %.2f hora(s) para chegar ao seu destino se for por um aviao 747-300 !! \n ",calc);
  return 0;
}
