#include <stdio.h>
#define MAX 500

int main(){
    
    char string[MAX+1], istring[MAX+1];
    int counter = 0,counterp = 0;

    printf("Phrase/Word");
    fgets(string,MAX+1,stdin);
    
    for(int i = 0; string[i] != '\n'; i++){
        if(string[i] != '\0'){
            counter++;
        }
    }
    printf("\n%d\n",counter);
    for(int counterp = 0; 0 <= counter; counterp++){
        istring[counterp] = string[counter];
        counter--;
        printf("%d %d\n",counterp,counter);
    }
    
    printf("%s",istring);
    
    return 0;
}
