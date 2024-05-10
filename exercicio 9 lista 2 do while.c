#include<stdio.h>

int main(){
	int entrada,qtde;
	double media,soma;
	do{
		soma+=entrada;
		qtde++;
		scanf("%d",&entrada);
	}while(entrada!=-99);
	
	if(soma!=0){
		qtde--;
	}
	media=soma/qtde;
	printf("soma: %lf Media: %lf",soma,media);
	return 0;
}
