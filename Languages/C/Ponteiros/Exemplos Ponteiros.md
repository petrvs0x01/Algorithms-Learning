```c
#include<stdio.h>

int main()
{   

    /*
    Tipos inteiros acumulam 4 Bytes / 32 Bits na Memória
    Ex: 
    x --> ADDRESS: 1000
    y 
    [1] ADDRESS: 996
    [2] ADDRESS: 992
    [3] ADDRESS: 988
    */
    
    int x = 3;
    int y[3] = {1,2,3};
    
    /*
    Tipos caracteres acumulam apenas 1 Byte / 8 Bits na Memória
    Ex: 
    c --> ADDRESS: 984 
    */
    
    char c = 'a';
}
```

-     O operador lógico '&' quando aplicado à uma variável, ele serve para puxar na memória o endereço de determinada variável existente na pilha.

---

```c
#include<stdio.h>

int main()
{
    int x = 3;
    int *p;
    p = &x;
    printf("%d\n",p);
}
```

- Ao declararmos o tipo da variável para recebermos os dados e assim também colocar o `'*'` a variável criada, estamos fazendo com que ela receba o endereço de memória. Logo, ao chamar-mos a variável 'x' por '&' estamos puxando o endereço de memória e jogando para essa variável 'p' para armazenar o endereço de 'x' na pilha.

---

```c
#include<stdio.h>

int main()
{   
    int x = 3;
    int *p;
    p = &x;
    printf("%d\n",*p);
}
```

---

```c
#include<stdio.h>

void trocaV(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main()
{   
    int a,b;
    printf("Escreva um Valor A:");
    scanf("%d",&a);
    printf("Escreva um Valor B:");
    scanf("%d",&b);
    trocaV(&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);
}
```

---

```c
#include <stdio.h>

void Ordenador(int *x,int *y, int *z){
    int a = *x;
    int b = *y;
    int c = *z;
    int aux = 0;
    
    if(a > b && a > c){
        aux = a;
        if(b > c){
            *x = c;
            *y = b;
        }
        else{
            *x = b;
            *y = c;
        }
        *z = aux;
    }
    if(b > c && b > a){
        aux = b;
        if(a > c){
            *x = c;
            *y = a;
        }
        else{
            *x = a;
            *y = c;
        }
        *z = aux;
    }
}

int main(){
    
    int x,y,z;

    scanf("%d%d%d",&x,&y,&z);
    
    Ordenador(&x,&y,&z);
    printf("Ordenado: %d %d %d\n",x,y,z);
}
```

---

```c
#include <stdio.h>

int main(){
    
    int firstvalue = 15, secondvalue = 15;
    int *p1, *p2;
    
    p1 = &firstvalue;
    printf("%d\n",firstvalue);
    p2 = &secondvalue;
    printf("%d\n",secondvalue);
    *p1 = 10;
    // firstvalue = 10
    *p2 = *p1;
    // secondvalue = 10
    p1 = p2; 
    // p1 recebe ponteiro de p2
    *p1 = 20;
    // secondvalue = 20
    printf("%d\n",firstvalue);
    printf("%d\n",secondvalue);
}
```