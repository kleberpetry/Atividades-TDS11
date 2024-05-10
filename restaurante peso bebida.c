#include<stdio.h>
#define precoQuilo 89
void calcular(double peso, double bebida);
int main(){
	int count;
	double peso=1,bebida=1;
	while(count!=1){
		if(peso!=0 && bebida!=0){
			system("cls");
			printf("digite o peso do prato: ");
			scanf("%lf",&peso);
			printf("valor da bebida: ");
			scanf("%lf",&bebida);
			calcular(peso,bebida);
		}else{
			break;
		}
	}
	return 0;
}
void calcular(double peso,double bebida){
	double total;
	total=bebida+(peso*precoQuilo);
	printf("Valor a ser pago: %.2lf\n",total);
	system("pause");
}
