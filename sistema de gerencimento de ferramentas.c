#include<stdio.h>
#include<string.h>
#include<locale.h>

typedef struct{
	int codigo;
	char nome[40];
	int quantidade;
	int disponivel;
}ferramenta;

typedef struct{
	char nomeLocatario[40];
	int ferramentaEmprestada;
	char dataEntrada[40];
	char dataSaida[40];
}emprestimo;


void cadastrarFerramentas(ferramenta ferramentas[],int contador){
	system("cls");
	ferramentas[contador].codigo=contador+1;
	printf("\nDigite o nome da ferramenta: ");
	fflush(stdin);
	gets(ferramentas[contador].nome);
	printf("\nDigite a quantidade da ferramenta: ");
	scanf("%d",&ferramentas[contador].quantidade);
	ferramentas[contador].disponivel=ferramentas[contador].quantidade;
}
void listarFerramentas(ferramenta ferramentas[],int contador){
	int x;
	for(x=0;x<contador;x++){
		printf("\nCodigo: %d",ferramentas[x].codigo);
		printf("\nNome: %s",ferramentas[x].nome);
		printf("\nQuantidade: %d",ferramentas[x].quantidade);
		printf("\nDisponível: %d\n",ferramentas[x].disponivel);
	}
	system("pause");
}
void buscarFerramentas(ferramenta ferramentas[],int contador){
	int x,igual;
	char nomeFerramenta[40];
	system("cls");
	printf("\nDigite o nome da ferramenta: ");
	fflush(stdin);
	gets(nomeFerramenta);
	for(x=0;x<contador;x++){
		if((strcmp(nomeFerramenta,ferramentas[x].nome))==0){
			printf("\nCodigo: %d",ferramentas[x].codigo);
			printf("\nNome: %s",ferramentas[x].nome);
			printf("\nQuantidade: %d",ferramentas[x].quantidade);
			printf("\nDisponível: %d\n",ferramentas[x].disponivel);
			system("pause");
			break;
		}
	}
}
void atualizarQuantidade(ferramenta ferramentas[],int contador){
	int x,codigo,novaQuantidade,diferencaQuantidade;
	system("cls");
	printf("\nDigite o codigo da ferramenta: ");
	scanf("%d",&codigo);
	for(x=0;x<contador;x++){
		if(codigo==ferramentas[x].codigo){
			printf("\nDigite a nova quantidade de ferramentas:");
			scanf("%d",&novaQuantidade);
			diferencaQuantidade=novaQuantidade-ferramentas[x].quantidade;
			ferramentas[x].quantidade=novaQuantidade;
			ferramentas[x].disponivel+=diferencaQuantidade;
		}
	}
	
}
void reservarFerramenta(ferramenta ferramentas[],int codEmprestimo,emprestimo emprestar[],int contador){
	int qtde;
	system("cls");
	fflush(stdin);
	printf("Digite o nome do locatário: ");
	gets(emprestar[codEmprestimo].nomeLocatario);
	printf("digite o codigo da ferramenta: ");
	scanf("%d",&emprestar[codEmprestimo].ferramentaEmprestada);
	printf("Digite a quantidade de ferramentas: ");
	scanf("%d",&qtde);
	fflush(stdin);
	printf("Digite a data de saida:");
	gets(emprestar[codEmprestimo].dataSaida);
	//-------------------------------
	int x;
	for(x=0;x<contador;x++){
		if(emprestar[codEmprestimo].ferramentaEmprestada==ferramentas[x].codigo){
			if(qtde<=ferramentas[x].disponivel){
				ferramentas[x].disponivel-=qtde;
				printf("\nEmprestimo realizado com sucesso!\n");
				system("pause");
				
			}else{
				printf("\nQuantidade de retirada superior a disponivel!\n");
				system("pause");
			}
		}
	}
}
void devolverFerramenta(){
	
}


void listarEmprestimo(emprestimo emprestar[],int codEmprestimo,ferramenta ferramentas[],int contador){
	int x,y;
	for(x=0;x<codEmprestimo;x++){
		printf("Nome locatario: %s",emprestar[x].nomeLocatario);
		for(y=0;y<contador;y++){
			if(emprestar[x].ferramentaEmprestada==ferramentas[y].codigo){
				printf("Ferramenta: %s",ferramentas[y].nome);
				break;
			}
		}
		printf("data da retirada: %s",emprestar[x].dataSaida);
	}
}
int menu(){
	int opcao;
	system("cls");
	printf("\n1- adicionar ferramentas");
	printf("\n2- listar ferramentas");
	printf("\n3- buscar ferramentas");
	printf("\n4- atualizar quantidade");
	printf("\n5- reservar ferramenta");
	printf("\n6- devolver ferramenta");
	printf("\n7- listar emprestimo");
	printf("\n8- sair");
	printf("\nOpção: ");
	scanf("%d",&opcao);
	return opcao;	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao,codigoEmprestimo=0,contador=0;
	ferramenta ferramentas[100];
	emprestimo emprestar[100];
	do{
		opcao=menu();
		switch(opcao){
			case 1:
				cadastrarFerramentas(ferramentas,contador);
				contador++;
				break;
			case 2:
				listarFerramentas(ferramentas,contador);
				break;
			case 3:
				buscarFerramentas(ferramentas,contador);
				break;
			case 4:
				atualizarQuantidade(ferramentas,contador);
				break;
			case 5:
				reservarFerramenta(ferramentas,codigoEmprestimo,emprestar,contador);
				break;
			case 6:
				//devolverFerramenta();
				break;
			case 7:
				//listarEmprestimos();
				break;
			case 8:
				break;
			default:
				printf("\nOpção inválida!\n");
				system("pause");
		}
	}while(opcao!=7);
	return 0;
}





