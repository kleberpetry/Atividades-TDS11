#include<stdio.h>

int main(){
	int bilhete=1000,a;
	while(bilhete<9999){
		//bilhete=bilhete+1;
		//bilhete++;		
		printf("Bilhete: %d\n",a++);
		if(a>5000){
			break;
		}
		//printf("Bilhete: %d\n",bilhete);
	}
	
	return 0;
}
