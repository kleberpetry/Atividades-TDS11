#include<stdio.h>

struct boletim{
	double nota1;
	double nota2;
	double media;
	char status;
		
};
void calcularMedia(struct boletim alunos[],int T);
void validarMedia(struct boletim alunos[],int T);
void imprimirMedia(struct boletim alunos[],int T);

int main(){
	int qtde,x;
	printf("Digite a quantidade de alunos: ");
	scanf("%d",&qtde);
	struct boletim alunos[qtde];
	for(x=0;x<qtde;x++){
		printf("Digite a nota 1 do aluno %d: ",x+1);
		scanf("%lf",&alunos[x].nota1);
		printf("Digite a nota 2 do aluno %d: ",x+1);
		scanf("%lf",&alunos[x].nota2);
	}
	calcularMedia(alunos,qtde);
	return 0;
}
void calcularMedia(struct boletim alunos[],int T){
	int x;
	for(x=0;x<T;x++){
		alunos[x].media=(alunos[x].nota1+alunos[x].nota2)/2;
	}
	validarMedia(alunos,T);
}
void validarMedia(struct boletim alunos[],int T){
	int x;
	for(x=0;x<T;x++){
		if(alunos[x].media>=7){
			alunos[x].status='S';
		}else{
			alunos[x].status='R';
		}
	}
	imprimirMedia(alunos,T);
}
void imprimirMedia(struct boletim alunos[],int T){
	int x;
	for(x=0;x<T;x++){
		printf("\nmedia do aluno %d: %.2lf",x+1,alunos[x].media);
		printf("\nalunos aprovador? : %c",alunos[x].status);
	}
}






