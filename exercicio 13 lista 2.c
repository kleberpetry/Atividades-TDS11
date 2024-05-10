#include<stdio.h>

int main(){
	char nome[40];
	int tamanho,i,quantidade;
	
	gets(nome);
	tamanho=strlen(nome);
	for(i=0;i<tamanho;i++){
		if(nome[i]!=' '){
			quantidade++;
		}
	}
	printf("a quantidade de letras e: %d",quantidade);
	
	return 0;
}
