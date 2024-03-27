#include <stdio.h>
#include <stdlib.h>
int main(){
	int menu,inicio,parada=9999;
	for(inicio=-1;inicio<=parada;inicio++){
		system("cls");
		printf("escolha uma opcao:\n");
		printf("1- cadastro\n");
		printf("2- venda\n");
		printf("0- sair\n");
		printf("opcao:");
		scanf("%d",&menu);
		if(menu==0){
			break;
		}
	}
	return 0;
}
