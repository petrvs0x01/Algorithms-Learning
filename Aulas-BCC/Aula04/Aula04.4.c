#include<stdio.h>
int main(){
    
    int resto,num;
    printf("Digite um número:");
    scanf("%d",&num);
    
    resto= num%10;
    
    if(resto == 0){
        printf("O número %d é múltiplo de 10",num);
    }
    if(resto > 0){
        printf("O número %d não é múltiplo de 10",num);
    }
    return 0;
}
