#include<stdio.h>

int main(){
	int n1,n2,r;
	scanf("%d %d",&n1,&n2);
	r=soma(n1,n2);
	printf("soma: %d",r);
	return 0;
}
int soma(int num1,int num2){
	int resultado;
	resultado=num1+num2;
	return resultado;
}
