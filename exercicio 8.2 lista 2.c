#include<stdio.h>

int main(){
	int n[4],x,y,z;
	for(x=0;x<4;x++){
		scanf("%d",&n[x]);
	}
	
	for(x=0;x<4;x++){
		for(y=0;y<4;y++){
			if(n[x]<n[y]){
				z=n[x];
				n[x]=n[y];
				n[y]=z;
			}
		}
	}
	
	for(x=0;x<4;x++){
		printf("[%d]",n[x]);
	}
	
	return 0;
}
