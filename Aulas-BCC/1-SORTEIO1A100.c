
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


// 1 - Sorteie um número de 1 a 100, exiba na tela e informe se é um número par ou ímpar.

int main()
{
    srand(time(NULL));
    rand();
    
    int x = rand() % (100 - 1 + 1) + 1;
    printf("Número sorteado: %d\n", x);
    
    if(x % 2 == 0){
        printf("Par");
    }
    else{
        printf("Ímpar");
    }
    
    
    return 0;
}
