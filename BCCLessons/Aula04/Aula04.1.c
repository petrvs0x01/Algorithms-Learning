
#include<stdio.h>

int main(){
    int num;
    // Faça um algoritmo que receba um número e mostre a mensagem "Sim" caso este número seja maior que 10. Se for menor ou igual, o programa deve encerrar sem exibir mais nada.
    printf("Digite um número:");
    scanf("%d",&num);
    if(num > 10){
        printf("Sim, esse número é maior que 10.");
    }
    else{
        printf("");
    }
    return 0;
}
