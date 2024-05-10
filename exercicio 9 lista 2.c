#include<stdio.h>

int main(){
	int soma,media,entrada,qtde;
	while(entrada!=-99){
		soma+=entrada;
		scanf("%d",&entrada);
		qtde++;
	}
	media=soma/qtde;
	printf("soma: %d Media: %d",soma,media);
	
	return 0;
}
