#include<stdio.h>

int main(){
	int variavel=15;
	int *ponteiro;
	
	ponteiro=&variavel;
	
	printf("valor da variavel: %d\n",variavel);
	printf("endereco da varaivel: %d\n", &variavel);
	printf("valor do ponteiro: %d\n",*ponteiro);
	
	
	return 0;
}
