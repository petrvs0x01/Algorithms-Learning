#include <stdio.h>

    /*
Em uma festa, homens pagam 20 reais de entrada e as mulheres pagam 17. Crie um programa que pergunta quantos homens e quantas mulheres participaram da festa e calcula o valor total arrecadado com as entradas.    */

int main(void){
    float homem,mulher,total;
    
    printf("Quantas Mulheres entrou na festa?\n");
    scanf("%f",&mulher);
    printf("Quantos Homens entrou na festa?\n");
    scanf("%f",&homem);
    total=(mulher*17)+(homem*20);
    printf("O total arrecadado na festa foi de %f",total);
    return 0;
}
