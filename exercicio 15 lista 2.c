#include<stdio.h>

int main(){
	int x,quantidade=0,numeros[20];
	for(x=1;x<=20;x++){
		if((x%2)==0){
				numeros[quantidade]=x;
				quantidade++;
				
		}
	}
	
	for(x=0;x<10;x++){
		printf("[%d]",numeros[x]);
	}
	
	
	return 0;
}
