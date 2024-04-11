#include<stdio.h>

int main(){
	int idade;
	
	scanf("%d",&idade);
	if(idade>0 && idade<16){
		printf("Nao eleitor");
	}else if(idade>=18 && idade<=65){
		printf("Eleitor obrigatorio");
	}else if(idade>=16 && idade<18){
		printf("Eleitor facultativo");
	}else if(idade>65){
		printf("Eleitor facultativo");
	}
	return 0;
}
