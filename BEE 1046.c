#include<stdio.h>

int main(){
	int hi,hf,horas;
	scanf("%d %d",&hi,&hf);
	
	if(hi>hf){
		horas=(24-hi)+hf;
	}
	if(hi<hf){
		horas=hf-hi;
	}
	if(hi==hf){
		horas=24;
	}
	printf("O JOGO DUROU %d HORA(S)\n",horas);
	
	return 0;
}
