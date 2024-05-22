#include<stdio.h>//biblioteca com funções de input e output
#include<locale.h>//biblioteca que da suporte a linguagem não oficial
#include<string.h>//biblioteca dedicada ao tratamento de elementos do tipo string

//estrutura de registro que permite agrupar variaveis de tipos de dados diferente
struct pessoa{
	int codigo;//variavel do tipo inteiro que sera utilizada para armazenar o codigo criado no ato do cadastro
	char nome[40];
	long int cpf;
	int somaPerguntas; // a soma total das perguntas
	int status; // status 1 verde 2 amarelo 3 vermelho
};

// matriz de perguntas pre configurado para ser lido durante o questionario
char pergunta[10][60] = {"Tosse seca", "Febre", "Cansaço", "Dor muscular", "Dor de cabeça", "Dor de Garganta", "Coriza", "Diarreia", "Perda do olfato", "Teve contato com alguém positivado"};

// vetor dos pesos para as perguntas sera utilizado para a soma
int pesoPerguntas[10] = {2, 5, 2, 2, 2, 5, 5, 5, 10, 10};

// vetor paciente do tipo pessoa
struct pessoa paciente[200];

// variavel global para utilização do marcado de posição do vetor paciente
int codigoPaciente = 0;

// declaração das funções que foram construidas depois do main (construtores)
void menu();
void cadastro();
void perguntas();
void triagem();
void listagem();
void buscaPaciente();

// função principal
int main() {
	setlocale(LC_ALL, "Portuguese");
	int opcao = 0;
	while (opcao != 3) {
		system("cls"); 
		menu();
		scanf("%d", &opcao);
		switch (opcao) {
			case 1:
				cadastro();
				break;
			case 2:
				listagem();
				break;
			case 3:
				printf("\nSaindo da aplicação\n");
				opcao = 3;
				break;
			case 4:
				buscaPaciente();
			default:
				printf("\nOpção inválida!\n");
				system("pause"); 
		}
	}
	return 0;
}

// funções
void menu() {
	printf("1-triagem\n2-lista de pacientes\n3-sair\n4-buscapaciente\n");
}

void cadastro() {
	system("cls");
	printf("\nDigite seu nome: ");
	fflush(stdin);
	gets(paciente[codigoPaciente].nome);
	printf("CPF (apenas números): ");
	scanf("%ld", &paciente[codigoPaciente].cpf);
	
	paciente[codigoPaciente].codigo = codigoPaciente + 1;
	
	perguntas();
	
	codigoPaciente++;
}

void perguntas() {
	int x = 0, pontos = 0;
	char resposta;
	printf("\nResponda o questionário\n");
	while (x < 10) {
		printf("\nVocê está %s ? S - sim | N - não: ", pergunta[x]);
		fflush(stdin);
		scanf(" %c", &resposta);
		if (resposta == 's' || resposta == 'S') {
			pontos += pesoPerguntas[x];
		}
		x++;
	}
	paciente[codigoPaciente].somaPerguntas = pontos;
	triagem();
}

void triagem() {
	if (paciente[codigoPaciente].somaPerguntas <= 6) {
		paciente[codigoPaciente].status = 1;
		printf("\nEncaminhe-se para a ala VERDE!\n");
	} else if (paciente[codigoPaciente].somaPerguntas >= 30) {
		paciente[codigoPaciente].status = 3;
		printf("\nEncaminhe-se para a ala VERMELHA!\n");
	} else {
		paciente[codigoPaciente].status = 2;
		printf("\nEncaminhe-se para a ala AMARELA!\n");
	}
	system("pause"); 
}

void listagem() {
	int x;
	system("cls");
	for (x = 0; x < codigoPaciente; x++) {
		printf("\nCódigo: %d", paciente[x].codigo);
		printf("\nNome: %s", paciente[x].nome);
		printf("\nCPF: %ld", paciente[x].cpf);
		printf("\nSoma das perguntas: %d", paciente[x].somaPerguntas);
		switch (paciente[x].status) {
			case 1:
				printf("\nAla: Verde\n");
				break;
			case 2:
				printf("\nAla: Amarela\n");
				break;
			case 3:
				printf("\nAla: Vermelha\n");
				break;
		}
	}
	printf("\n\n");
	system("pause"); 
}

void buscaPaciente(){
	system("cls");
	char busca[40];
	printf("\nDigite o nome do paciente: ");
	fflush(stdin);
	gets(busca);
	int x,ok=0;
	for(x=0;x<codigoPaciente;x++){
		if((strcmp(busca,paciente[x].nome))==0){
			printf("\nCódigo: %d", paciente[x].codigo);
			printf("\nNome: %s", paciente[x].nome);
			printf("\nCPF: %ld", paciente[x].cpf);
			printf("\nSoma das perguntas: %d", paciente[x].somaPerguntas);
			switch (paciente[x].status) {
				case 1:
					printf("\nAla: Verde\n");
					break;
				case 2:
					printf("\nAla: Amarela\n");
					break;
				case 3:
					printf("\nAla: Vermelha\n");
					break;
			}
			break;
			system("pause");
			ok=1;
		}
		
	}
	if(ok!=1){
		printf("\nnada encontrado\n");
	}
}







