#include<stdio.h>
#include<stdlib.h>
#include<time.h>



// 3 - Escreva um programa que sorteia um número de 1 a 10 e dá duas chances para que o usuário acerte. O programa não deve alterar o número sorteado, e só deve pedir o segundo palpite, caso a pessoa erre sua primeira tentativa.

int main()
{
    srand(time(NULL));
    rand();
    
    int x = rand() % (10) + 1;
    int user;
    printf("Chute um número !!");
    scanf("%d",&user);
    
    if(x != user){
        printf("Você errou !! Chute outro número...\n");
        scanf("%d",&user);
        if(x == user){
         printf("Eu pensei: %d e você pensou %d\n",x,user);
         printf("Parabéns !! Você acertou...");
         }
        else{
          printf("Eu pensei: %d e você pensou %d\n",x,user);
          printf("Você errou novamente...");
        }
    }
    else{
        printf("Você acertou !! Eu pensei: %d e você pensou %d",x,user);
    }
    return 0;
}