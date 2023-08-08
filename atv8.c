#include <stdio.h>

int main() {
float raio, altura, area, volume;

   
    printf("Digite o raio do cilindro: \n");
    scanf("%f", &raio);
    printf(" \n");
    printf("Digite o altura do cilindro: \n");
    scanf("%f", &altura);
    printf(" \n");
    printf("Resultado: \n");
    printf(" \n");
    
    area =   2 * 3.14 * raio * (raio + altura);

    volume = 3.14 * (raio * raio) * altura;

    printf("area = %2f \n", area);
    
    printf(" \n");
    printf("Volume = %2f \n", volume);
    return 0;
}
