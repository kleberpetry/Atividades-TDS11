#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int entrada,qtde,maior;
	while(entrada!=0){
		scanf("%d",&entrada);
		if(maior<entrada){
			maior=entrada;
		}
	}
	printf("Maior: %d",maior);
	return 0;
}
