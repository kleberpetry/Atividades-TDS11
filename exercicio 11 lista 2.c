#include<stdio.h>


int main(){
	int entrada,qtde,maior,numeros[9999],x=0,y;
	while(entrada!=0){
		scanf("%d",&entrada);
		numeros[x]=entrada;
		x++;
		
	}
	for(y=0;y<x;y++){
		if(maior<numeros[y]){
			maior=numeros[y];
		}
	}
	printf(maior);
	
	
	return 0;
}
