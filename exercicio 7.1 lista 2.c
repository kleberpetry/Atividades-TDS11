#include<stdio.h>

int main(){
	int num,x;
	while(x!=1){
		system("cls");
		scanf("%d",&num);
		if(num>=20 && num<=80){
			printf("Parabens");
			break;
		}
		printf("tente outra vez!\n");
		system("pause");
	}
	
	return 0;
}
