#include <stdio.h>
int main() {    
	int var = 10;     // Vari�vel normal    
	int *ptr = &var;  // Ponteiro que armazena o endere�o de var    
	printf("Valor de var: %d\n", var);       // Imprime 10    
	printf("Endere�o de var: %d\n", &var);   // Imprime o endere�o de var
	printf("Valor de ptr: %d\n", ptr);       // Imprime o endere�o de var (mesmo que &var)    	
	printf("Valor apontado por ptr: %d\n", *ptr); // Imprime 10 (valor de var)    
	return 0;}

