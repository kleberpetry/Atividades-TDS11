#include<stdio.h>

int main(){
	int numero[10],x;
	for(x=0;x<10;x++){
		printf("Digite o numero:");
		scanf("%d",&numero[x]);
	}
	for(x=0;x<10;x++){
		if((numero[x]%2)==0){
			printf("[%d]",numero[x]);
		}
	}
	return 0;
}
