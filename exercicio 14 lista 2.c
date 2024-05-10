#include<stdio.h>

int main(){
	char nome[40];
	int tamanho,i,quantidade=0;
	
	gets(nome);
	tamanho=strlen(nome);
	for(i=0;i<tamanho;i++){
		if(nome[i]=='a'|| nome[i]=='A'){
			quantidade++;
		}
	}
	printf("a quantidade de letras A e: %d",quantidade);
	
	return 0;
}
