#include<stdio.h>

int main(){
	int menu;
	printf("1- lancar pedido\n2- mostrar pedidos\n3- sair\n");
	scanf("%d",&menu);
	
	switch(menu){
		case 1:
			printf("vc lancou o pedido");
			break;
		case 2:
			printf("vc mostrou o pedido");
			break;
		case 3:
			printf("saindo do sistema, tchau");
			break;
		default:
			printf("opcao invalida, digite novamente");
	}
	
	
	return 0;
}
