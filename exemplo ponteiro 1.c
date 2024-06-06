#include <stdio.h>
int main() {    
	int var = 10;     // Variável normal    
	int *ptr = &var;  // Ponteiro que armazena o endereço de var    
	printf("Valor de var: %d\n", var);       // Imprime 10    
	printf("Endereço de var: %d\n", &var);   // Imprime o endereço de var
	printf("Valor de ptr: %d\n", ptr);       // Imprime o endereço de var (mesmo que &var)    	
	printf("Valor apontado por ptr: %d\n", *ptr); // Imprime 10 (valor de var)    
	return 0;}

