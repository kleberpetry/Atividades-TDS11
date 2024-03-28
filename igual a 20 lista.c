#include<stdio.h>

int main(){
	int numero;
	scanf("%d",&numero);
	if(numero>20){
		printf("MAIOR que 20");
	}
	if(numero<20){
		printf("MENOR que 20");
	}
	if(numero==20){
		printf("IGUAL a 20");
	}
	
	return 0;
}
