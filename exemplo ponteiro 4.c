#include <stdio.h>
void modifica(int *ptr) {    
	*ptr = 100; // Modifica o valor da vari�vel apontada pelo ponteiro
}
int main() {    
	int var = 20;     // Declare uma vari�vel do 	tipo int    
	int *ptr = &var;  // Declare um ponteiro e atribua o endere�o de var
	
	printf("Valor de var antes da fun��o: %d\n", var); // Imprime o valor de var antes da fun��o    	
	modifica(ptr); // Chama a fun��o para modificar o valor de var    
	printf("Valor de var depois da fun��o: %d\n", var); // Imprime o valor de var depois da fun��o    	
	return 0;
}	

