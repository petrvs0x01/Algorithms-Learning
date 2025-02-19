#include <stdio.h>

    /*
  Escreva um algoritmo para calcular o consumo médio de um automóvel (medido em km/l), dado que são conhecidos a distância total percorrida e o volume de combustível consumido para percorrê-la (medido em litros).
    */

int main(void){
    float kilometragem,litro,media;
    
    printf("Quantos KM você rodou?\n");
    scanf("%f",&kilometragem);
    printf("Digite a quantidade de litro que você abasteçeu:\n");
    scanf("%f",&litro);
    media= kilometragem/litro;
    printf("O consumo médio que seu carro faz é de %f Km/L",media);
    return 0;
}
