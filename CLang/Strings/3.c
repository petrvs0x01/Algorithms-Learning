#include <stdio.h>
#define MAX 500

int main(){

    char string[MAX+1], istring[MAX+1];
    int counter = 0,counterp = 0;

    printf("Phrase/Word\n");
    fgets(string,MAX+1,stdin);
    
    for(int i = 0; string[i] != '\n'; i++){
        if(string[i] != '\0'){
            counter++;
        }
    }
    for(int counterp = 0; 0 <= counter; counterp++){
        istring[counterp] = string[counter];
        counter--;
        if(counter == -1){
        break; }
    }
    printf("%s\n",istring);

    return 0;
}
