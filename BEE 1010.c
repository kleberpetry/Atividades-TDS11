#include <stdio.h>
 //BEE1010
int main() {
 	int codigo,qtde,x;
 	double valor,total;
 	for(x=1;x<=2;x++){
 		scanf("%d %d %lf",&codigo,&qtde,&valor);
 		total+=(qtde*valor);
	 }
	printf("VALOR A PAGAR: R$ %.2lf\n",total);
 	
    return 0;
}
