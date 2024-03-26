#include<stdio.h>

int main(){
	int bilhete=1000;
	while(bilhete<9999){
		//bilhete=bilhete+1;
		//bilhete++;		
		printf("Bilhete: %d\n",bilhete++);
	}
	
	return 0;
}
