#include<stdio.h>
		
int main(){
	int nfumantes=15,fumantes=5,laco=0;
	while(laco!=1){
		int opcao;
		system("cls");
		printf("[%d]fumantes | [%d]nao fumantes",fumantes,nfumantes);
		printf("\n1-Reservar\n2-Tirar reserva\n3-Sair\n");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				system("cls");
				printf("\n1-Fumante\n2-Nao fumante\n");
				scanf("%d",&opcao);
				if(opcao==1){
					if(fumantes>0 && fumantes<=5){
						fumantes--;
						printf("\nReserva realizada\n");
						system("pause");
					}else{
						printf("\nRESERVAS EXCEDIDAS\n");
						system("pause");
					}
				}else if(opcao==2){
					if(nfumantes>0 && nfumantes<=15){
						nfumantes--;
						printf("\nReserva realizada\n");
						system("pause");
					}else{
						printf("\nRESERVAS EXCEDIDAS\n");
						system("pause");
					}
				}else{
					printf("\nopcao invalida");
					system("pause");
				}
				break;
				case 2:
					system("cls");
					printf("\n1-Fumante\n2-Nao fumante\n");
					scanf("%d",&opcao);
					if(opcao==1){
						if(fumantes<=5){
							fumantes++;
							printf("\nMesa liberada\n");
							system("pause");
						}else{
							printf("\ntodas as mesas liberadas\n");
							system("pause");
						}
					}else if(opcao==2){
						if(nfumantes<=15){
							nfumantes++;
							printf("\nMesa liberada\n");
							system("pause");
						}else{
							printf("\ntodas as mesas liberadas\n");
							system("pause");
						}
					}else{
						printf("\nopcao invalida");
						system("pause");
					}
					break;
					case 3:
						printf("\nSaindo da aplicacao\n");
						laco=1;
						break;
					default:
						printf("\nopcao invalida!\n");
						
		}
	}
	return 0;
}
