## Motivação de Estudos

- Structures podem ser bastante úteis quando queremos organizar dados, sem precisar ter que criar vários vetores e ter que trabalhar uma forma completamente complicada. Podemos simplesmente utilizar o structure para organizar os dados e ter formas fáceis para usar.


## Modelo

```c
struct clientes{
	<id> <name>;
	};
```

- Podemos realizar vários tipos de resoluções de problemas através das structures, já que através delas, podemos atrelar dados a usuários etc. Ex:

```c
#include <stdio.h>
#define LengthMax 100

struct clientes{
    
    char name[LengthMax];
    char cpf[LengthMax];
    int idade[LengthMax];
    
};

void printar(struct clientes c){
    printf("%s %s %d",c.cpf,c.name,c.idade);
    printf("\n");
}

int main(){
    
    struct clientes c[LengthMax];
    int n;
    printf("Quantos dados serão digitados? ");
    scanf("%d",&n);
    for(int i = 1; i <= n ; i++){
        printf("CADASTRO - PESSOA %d\n",i);
        printf("Nome:");
        scanf("%s",&c[i].name);
        getchar();
        printf("CPF:");
        scanf("%s",&c[i].cpf);
        printf("Idade:");
        scanf("%d",&c[i].idade);
        printf("\n");
    }
    printf("CPF NOME IDADE\n");
    for(int i = 1; i <= n; i++){
        printar(c[i]);
    }
    return 0;
}
```