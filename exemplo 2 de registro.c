#include<stdio.h>
struct pessoa{
	int codigo;
	char nome[20];
	double salario;
};
struct pessoa funcionario[5];

int main(){
	int x;
	for(x=0;x<5;x++){
		printf("Digite o codigo: ");
		scanf("%d",&funcionario[x].codigo);
		printf("Digite o nome: ");
		fflush(stdin);
		gets(funcionario[x].nome);
		printf("Digite o salario: ");
		scanf("%lf",&funcionario[x].salario);
	}
	
	for(x=0;x<5;x++){
		if(funcionario[x].salario>3000){
			printf("nome: %s\nSalario: %lf",funcionario[x].nome,funcionario[x].salario);
		}
	}
	
	return 0;
}
