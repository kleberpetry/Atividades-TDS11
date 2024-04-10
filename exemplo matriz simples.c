#include<stdio.h>

int main(){
	int numero[3][3];
	numero[0][0]=1;
	numero[0][1]=2;
	numero[0][2]=3;
	numero[1][0]=4;
	numero[1][1]=5;
	numero[1][2]=6;
	numero[2][0]=7;
	numero[2][1]=8;
	numero[2][2]=9;
	
	int l,c;
	for(l=0;l<3;l++){
		printf("\n");
		for(c=0;c<3;c++){
			printf("[%d]",numero[l][c]);
		}
	}
	
	
	return 0;
}
