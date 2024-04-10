#include<stdio.h>

int main(){
	int numero,qtde=0;
	
	for(numero=0;numero<200;numero++){
		if((numero%4)==0){
			printf("%d e divisivel por 4\n",numero);
			qtde++;
		}	
	}
	printf("quantidade de numeros: %d",qtde);
	
	return 0;
}
