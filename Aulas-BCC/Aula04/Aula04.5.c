#include<stdio.h>
int main(){
    
    int num2,num;
    printf("Digite um número:");
    scanf("%d",&num);
    
    printf("Digite um número:");
    scanf("%d",&num2);
    
    if(num > 10){
        if(num2 > 10){
            printf("O número %d e %d são maiores que 10.",num,num2);
        }
    return 0;
    }
}
