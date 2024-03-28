#include<stdio.h>

int main(){
	float numero;
	
	scanf("%f",&numero);
	if(numero>50){
		printf("%.2f",numero/2);
	}else{
		printf("%.2f",numero);
	}
	return 0;
}
