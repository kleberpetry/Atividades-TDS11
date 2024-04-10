#include<stdio.h>

int main(){
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	soma(n1,n2);
	
	return 0;
}
void soma(int num1,int num2){
	int resultado;
	resultado=num1+num2;
	printf("soma: %d",resultado);
}
