#include <stdio.h>
//BEE 1009
int main() {
 	double salario, vendas;
 	char nome[10];
 	scanf("%s",&nome);
 	scanf("%lf %lf",&salario,&vendas);
 	salario=salario+(vendas*0.15);
 	printf("TOTAL = R$ %.2lf\n",salario);
     
    return 0;
}
