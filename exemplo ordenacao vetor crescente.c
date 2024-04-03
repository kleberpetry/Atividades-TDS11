#include<stdio.h>

int main(){
	int numero[10],x,y,z;
	for(x=0;x<10;x++){
		scanf("%d",&numero[x]);
	}
	for(x=0;x<10;x++){
		for(y=0;y<10;y++){
			if(numero[x]<numero[y]){
				z=numero[x];
				numero[x]=numero[y];
				numero[y]=z;
			}
		}
	}
	for(x=0;x<10;x++){
		printf("[%d]",numero[x]);
	}
	
	
	return 0;
}
