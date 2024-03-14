#include <stdio.h>
//BEE 1008
int main() {
 	int numero,horas;
 	double salario,salarioFinal;
 	scanf("%d %d %lf",&numero,&horas,&salario);
 	salarioFinal=horas*salario;
 	printf("NUMBER = %d\nSALARY = U$ %.2lf\n",numero,salarioFinal);    
 
    return 0;
}
