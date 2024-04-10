#include<stdio.h>
#include<stdbool.h>
void compara(int num);
int main(){
	int num;
	scanf("%d",&num);
	
	return 0;
}

void compara(int num){
	bool retorno;
	if((num%10)==0){
		retorno=true;
	}else if((num%5)==0){
		retorno= true;
	}else if((num%2)==0){
		retorno=true;
	}else{
		retorno=false;
	}
	if(retorno!=false){
		printf("divisivel por 10/5/2");
	}
}



