#include<stdio.h>

int main(){
	int setor=1,cadeira;
	while(setor<=4){
		cadeira=1;
		while(cadeira<=200){
			printf("setor %d - Cadeira %d\n",setor, cadeira);
			cadeira++;
		}
		setor++;
	}
	
	
	return 0;
}
