#include<stdio.h>

int main(){
	int a, b, soma = 0;
	
	printf("Digite um n�mero: ");
	scanf("%d", &a);
	printf("Digite outro n�mero: ");
	scanf("%d", &b);
	
	soma = a + b;
	
	if(soma > 10) {
		printf("A soma dos numeros e: %d", soma);
	}
	
	return 0;
}
