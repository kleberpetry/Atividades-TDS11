#include<stdio.h>

int main(){
	int a, b, soma = 0;
	
	printf("Digite um número: ");
	scanf("%d", &a);
	printf("Digite outro número: ");
	scanf("%d", &b);
	
	soma = a + b;
	
	if(soma > 10) {
		printf("A soma dos numeros e: %d", soma);
	}
	
	return 0;
}
