#include<stdio.h>

int main(){
	char nome[3][20];
	
	gets(nome[0]);
	gets(nome[1]);
	gets(nome[2]);
	int l; 
	for(l=0;l<3;l++){
		printf("%s\n",nome[l]);
	}
	return 0;
}
