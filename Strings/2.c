#include <stdio.h>
#define MAX 500

int main(){
    
    char string[MAX+1];
    int counter = 0;
    
    printf("Write a phrase:");
    fgets(string,MAX+1,stdin);
    
    for(int i = 0; string[i] != '\n';i++){
        if(string[i] == 'a' | string[i] == 'e' | string[i] == 'i' | string[i] == 'o' | string[i] == 'u'){
            counter++;
        }
        if(string[i] == 'A' | string[i] == 'E' | string[i] == 'I' | string[i] == 'O' | string[i] == 'U'){
            counter++;
        }
    }
    printf("\n%d Vowels",counter);
    
    return 0;
}
