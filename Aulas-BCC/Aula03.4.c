#include <stdio.h>

    /*
Crie um programa que calcula o volume de um cilindro, solicitando que o usuário digite apenas a medida do raio e a altura do mesmo.    */

int main(void){
    float raio,altura,volume;
    
    printf("Digite o raio do cilindro:");
    scanf("%f",&raio);
    printf("Digite a altura do cilindro:");
    scanf("%f",&altura);
    volume= 3.14 * (raio * raio) * altura;
    printf("O volume do cilindro é de: %f",volume);
    return 0;
}
