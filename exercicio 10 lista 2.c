#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero,cont;
	while(cont!=1){
		system("cls");
		scanf("%d",&numero);
		if(numero>=1 && numero <=4){
			printf("%d\n",numero);
		}else{
			printf("Entrada inválida, digite novamente\n");
			}
	system("pause");	
	}
	
	return 0;
}
