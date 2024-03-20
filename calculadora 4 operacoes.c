#include<stdio.h>

int main(){
	double num1,num2, resultado;
	int op;
	printf("Digite o primeiro numero: ");
	scanf("%lf",&num1);
	printf("Digite o segundo numero: ");
	scanf("%lf",&num2);
	printf("Deseja qual operacao:\n1-soma\n2-subtracao\n3-multiplicacao\n4-divisao\n");
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("resultado: %lf",num1+num2);
			//resultado=num1+num2;
			//printf("resultado: %lf",num1+num2);
			break;
		case 2:
			printf("resultado: %lf",num1-num2);
			//resultado=num1-num2;
			break;
		case 3:
			printf("resultado: %lf",num1*num2);
			//resultado=num1*num2;
			break;
		case 4:
			printf("resultado: %lf",num1/num2);
			//resultado=num1/num2;
			break;
		default:
			printf("operacao invalida, selecione entre 1 e 4");	
	}
	
	if(op!=0)printf("\n\nok");
	
	
	//printf("\no resutado da operacao e: %lf\n",resultado);
	return 0;
}
