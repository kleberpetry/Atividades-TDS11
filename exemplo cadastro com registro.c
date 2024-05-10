#include<stdio.h>
#include<locale.h>
struct pessoa{
	char nome[40];
	char email[40];
	long int fone;
};
struct pessoa clientes[20];
void menu();
void cadastro();
void busca();
int p=0;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	while(opcao!=3){
		system("cls");
		menu();
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				cadastro();
				break;
			case 2:
				busca();
				break;
			case 3:
				printf("\nSair");
				break;
			default:
				printf("\nopção inválida\n");
				system("pause");
		}
	}
	
	return 0;
}
void menu(){
	printf("Escolha uma opção abaixo");
	printf("\n1-cadastro");
	printf("\n2-buscar");
	printf("\n3-sair");
	printf("\nopção: ");
}

void cadastro(){
	system("cls");
	printf("digite o nome: ");
	fflush(stdin);
	gets(clientes[p].nome);
	printf("Digite o email: ");
	gets(clientes[p].email);
	fflush(stdin);
	printf("Digite o fone: ");
	scanf("%d",&clientes[p].fone);
	p++;
}

void busca(){
	char busca[40];
	system("cls");
	fflush(stdin);
	printf("\nDigite o nome: ");
	gets(busca);
	int x,existe=0;
	
	for(x=0;x<p;x++){
		if((strcmp(busca,clientes[x].nome))==0){
			existe=1;
		}
	}
	if(existe==1){
		printf("\ncadastro existe\n");
		system("pause");
	}else{
		printf("\ncadastro inexistente\n");
		system("pause");
	}
}




