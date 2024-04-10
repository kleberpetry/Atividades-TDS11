#include<stdio.h>
#include<stdbool.h>
bool divisao(int num);
int main(){
	int num;
	
	scanf("%d",&num);
	if((divisao(num))!=false){
		printf("divisivel por 10/5/2");
	}
	
	return 0;
}

bool divisao(int num){
	bool retorno=false;
	if((num%10)==0){
		retorno=true;
	}else if((num%5)==0){
		retorno= true;
	}else if((num%2)==0){
		retorno=true;
	}else{
		retorno=false;
	}
	return retorno;	
}



