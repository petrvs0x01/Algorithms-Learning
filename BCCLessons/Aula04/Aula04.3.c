#include<stdio.h>

int main(){
    int num,num2;
    //Escrever um algoritmo que leia dois valores inteiro distintos e informe qual deles é o maior.
    printf("Digite um número:");
    scanf("%d",&num);
    printf("Digite um outro número:");
    scanf("%d",&num2);
    
    if(num > num2){
        printf("O número %d é maior que %d",num,num2);
    }
    if(num < num2){
        printf("O número %d é maior que %d",num2,num);
    }
    if(num == num2){
        printf("Ambos os números que você digitou são iguais");
    }
    return 0;
}
