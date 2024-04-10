#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char nome[20];
	int tamanho,x;
	
	gets(nome);
	tamanho=strlen(nome);
	
	printf("qtde caracteres: %d\n",tamanho);
	for(x=0;x<4;x++){
		printf("%c",nome[x]);
	}
		
	return 0;
}
