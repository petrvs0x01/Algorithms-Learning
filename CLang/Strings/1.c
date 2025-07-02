#include <stdio.h>

int main(){
    
    char c[500];
    int contador = 0;
    
    printf("DIGITE UMA STRING\n");
    fgets(c, 500,stdin);
    
    for(int i = 0; c[i] != '\0'; i++){
        if(c[i] != '\n'){
            contador++;
        }
    }
    printf("\nString: %s",c);
    printf("Length: %d\n",contador);
    return 0;
}
