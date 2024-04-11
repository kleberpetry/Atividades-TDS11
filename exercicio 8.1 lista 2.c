#include<stdio.h>

int main(){
	int n1,n2,n3,n4,z;
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	if(n1>n2){
		z=n1;
		n1=n2;
		n2=z;		
	}
	if(n1>n3){
		z=n1;
		n1=n3;
		n3=z;
	}
	if(n1>n4){
		z=n1;
		n1=n4;
		n4=z;
	}
	if(n2>n3){
		z=n2;
		n2=n3;
		n3=z;
	}
	if(n2>n4){
		z=n2;
		n2=n4;
		n4=z;
	}
	if(n3>n4){
		z=n3;
		n3=n4;
		n4=z;
	}
	
	printf("[%d][%d][%d][%d]",n1,n2,n3,n4);
	
	
	return 0;
}
