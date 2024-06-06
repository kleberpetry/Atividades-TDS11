#include <stdio.h>
void modifica(int *ptr) {    
	*ptr = 100; // Modifica o valor da variável apontada pelo ponteiro
}
int main() {    
	int var = 20;     // Declare uma variável do 	tipo int    
	int *ptr = &var;  // Declare um ponteiro e atribua o endereço de var
	
	printf("Valor de var antes da função: %d\n", var); // Imprime o valor de var antes da função    	
	modifica(ptr); // Chama a função para modificar o valor de var    
	printf("Valor de var depois da função: %d\n", var); // Imprime o valor de var depois da função    	
	return 0;
}	

