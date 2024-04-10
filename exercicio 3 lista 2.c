#include<stdio.h>

int main(){
	char nome[40];
	char sexo;
	int idade;
	
	printf("digite seu nome: ");
	gets(nome);
	printf("digite seu secxu: ");
	scanf("%c",&sexo);
	printf("digite sua idade: ");
	scanf("%d",&idade);
	
	if(sexo=='m' && idade>=18){
		printf("Alistamento");
	}else{
		printf("Nao esta apto");
	}
	
	return 0;
}
