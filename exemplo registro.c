#include<stdio.h>
struct cliente{
	char nome[20];
	int fone;
	char email[20];
	long int cpf;
};
struct cliente pf;
struct cliente pj;


int main(){
	strcpy(pj.nome,"casas bahia");
	pj.fone=1234567;
	
	printf("digite o nome: ");
	gets(pf.nome);
	printf("digite o fone: ");
	scanf("%d",&pf.fone);
	printf("Digite o email: ");
	fflush(stdin);
	gets(pf.email);
	printf("Digite o CPF: ");
	scanf("%d",&pf.cpf);
	
	strcpy(pj.nome,pf.nome);
	pj.fone=pf.fone;
	strcpy(pj.email,pf.email);
	pj.cpf=pf.cpf;
	
	printf("\n\n");
	printf("nome: %s\n",pj.nome);
	printf("Fone: %d\n",pj.fone);
	printf("Email: %s\n",pj.email);
	printf("CPF: %d\n",pj.cpf);
	
	return 0;
}
