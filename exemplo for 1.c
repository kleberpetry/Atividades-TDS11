#include<stdio.h>

int main(){
	int bilhete,primeiro,ultimo;
	printf("digite o primeiro numero do bilhete: ");
	scanf("%d",&primeiro);
	printf("digite o ultimo numero do bilhete: ");
	scanf("%d",&ultimo);
		
	for(bilhete=primeiro;bilhete<=ultimo;bilhete++){
		printf("bilhete: %d\n",bilhete);
	}
	
	
	return 0;
}
