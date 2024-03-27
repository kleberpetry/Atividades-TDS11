#include<stdio.h>
#include<stdlib.h>

int main(){
	double num1,num2,resultado;
	int opcao;
	while(opcao!=5){
		system("cls");
		printf("Digite o primeiro numero:");
		scanf("%lf",&num1);
		printf("Digite o segundo numero:");
		scanf("%lf",&num2);
		printf("Digite a operacao desejada:");
		printf("\n1-somar\n2-subtrair\n3-multiplicar\n4-dividir\n5-sair\n");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				resultado=num1+num2;
				printf("o resultado e= %.2lf\n",resultado);
				system("pause");
				break;
			case 2:
				resultado=num1-num2;
				printf("o resultado e= %.2lf\n",resultado);
				system("pause");
				break;
			case 3:
				resultado=num1*num2;
				printf("o resultado e= %.2lf\n",resultado);
				system("pause");
				break;
			case 4:
				resultado=num1/num2;
				printf("o resultado e= %.2lf\n",resultado);
				system("pause");
				break;
			case 5:
				printf("\n saindo da aplicacao, ate mais!\n");
				system("pause");
				break;
			default:
				printf("\nopcao invalida\n");
				system("pause");
		}	
	}
	
	return 0;
}
