#include<stdio.h>

int main(){
    int num,pari;
    //Solicite que o usuário digite um número. Informe então se este número é par ou ímpar.
    printf("Digite um número:");
    scanf("%d",&num);
    pari= num%2;
    if(pari == 0){
        printf("Sim, esse número é par.");
    }
    else{
        printf("Esse número não é par");
    }
    return 0;
}
