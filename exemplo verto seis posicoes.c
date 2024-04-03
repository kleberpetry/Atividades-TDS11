#include<stdio.h>

int main(){
	int numero[6];
	
	numero[0]=1;
	numero[1]=2;
	numero[2]=3;
	numero[3]=4;
	numero[4]=5;
	numero[5]=6;
	
	int x;
	for(x=0;x<6;x++){
		printf("%d",numero[x]);
	}
	
	return 0;
}
