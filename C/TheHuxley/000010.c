#include <stdio.h>


int main() {
    
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);
    
    if(a != b && a != c){
        printf("A");
    }
    else{
        if(b != a && b != c){
            printf("B");
        }
        else if(c != a && c != b){
            printf("C");
        }
        else{
            printf("*");}
    }
	return 0;
}
