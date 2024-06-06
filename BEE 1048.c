#include<stdio.h>

int main(){
	double salario, reajuste, novoSalario,percentual;
	scanf("%lf",&salario);
	
	if(salario>0 && salario<=400.00){
		novoSalario=salario*1.15;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15%%\n",novoSalario,(salario*1.15)-salario);
	}else if(salario>=400.01 && salario<=800.00){
		novoSalario=salario*1.12;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12%%\n",novoSalario,(salario*1.12)-salario);
	}else if(salario>=800.01 && salario<=1200.00){
		novoSalario=salario*1.10;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10%%\n",novoSalario,(salario*1.10)-salario);
	}else if(salario>=1200.01 && salario<=2000.00){
		novoSalario=salario*1.07;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7%%\n",novoSalario,(salario*1.07)-salario);
	}else if(salario>2000.00){
		novoSalario=salario*1.04;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4%%\n",novoSalario,(salario*1.04)-salario);
	}
	
	
	
	return 0;
}
