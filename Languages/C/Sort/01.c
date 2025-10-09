#include <stdio.h>

int searchbinary(int v[],int length,int x){

	int low = 0;
	int high = length;

	while(low <= high){
		int mid = (low + high) / 2; //Caso não seja um inteiro, vai arredondar para baixo
		int opt = v[mid];
		if(opt == x){
			return mid + 1;}
		if(opt > x){
			high = mid - 1;}
		else{
			low = mid + 1;}
	}
	return -1;
}

int main(){

	int x;
	printf("X:");
	scanf("%d",&x);
	int v[] = {1,2,5,6,7};
	int length = sizeof(v) / sizeof(v[0]); //Ele pega o tamanho total do array e divide pelo tamanho inicial de um byte do array
	printf("%d\n",searchbinary(v,length,x));
}
