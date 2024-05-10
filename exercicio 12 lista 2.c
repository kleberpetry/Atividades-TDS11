#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	//pode compilar
	//comando de saida mensagem pro usuario
	printf("bem vindo");
	int x,soma=0;
	for(x=0;x<=20;x++){
		//presta atenção que esta repetindo
		soma+=x;
		//a linha 12 esta certa
		//apaga a linha 15
		//já deu certo
	}
	//apresentação do resultado
	printf("\nsoma dos numeros de 1 a 20 : %d\n",soma);
	//pode pular professor
	return 0;
}
