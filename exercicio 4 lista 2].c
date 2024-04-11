#include<stdio.h>

int main(){
	int num,r;
	scanf("%d",&num);
	r=compara(num);
	if(r!=0){
		printf("e divisivel por 10, por 5, por 2 ");
	}
	return 0;
}
int compara(int num){
	int r;
	if((num%10)==0){
		r=1;
	}else if((num%5)==0){
		r=1;
	}else if((num%2)==0){
		r=1;
	}else{
		r=0;
	}
	return r;
}



