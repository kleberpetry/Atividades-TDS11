#include<stdio.h>

int main(){
	int numero[5],x;
	for(x=0;x<5;x++){
		printf("Digite um numero: ");
		scanf("%d",&numero[x]);
	}
	for(x=0;x<5;x++){
		printf("%d\n",numero[x]);
	}
	return 0;
}
