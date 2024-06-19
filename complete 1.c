#include<stdio.h>
#include<stdlib.h> // Inclui a biblioteca stdlib.h para usar a função system

double soma(double num1,double num2){
    double resultado;
    resultado=num1+num2;
    return resultado;
}

double sub(double num1,double num2){
    double resultado;
    resultado=num1-num2;
    return resultado;
}

double multi(double num1,double num2){
    double resultado;
    resultado=num1*num2;
    return resultado;
}

double divisao(double num1,double num2){
    double resultado;
    resultado=num1/num2;
    return resultado;
}

int main(){
    int op;
    double num1,num2;
    do{
        
        printf("\nDigite dois valores: ");
        scanf("%lf %lf",&num1,&num2);
        printf("\nSelecione a operacao:");
        printf("\n1- soma\n2- sub\n3- multi\n4- div\n0- sair");
        printf("\nopcao: ");
        scanf("%i",&op);
        switch(op){
            case 1:
                printf("Resultado: %.2lf\n",soma(num1,num2));
                system("pause");
                break;
            case 2:
                printf("Resultado: %.2lf\n",sub(num1,num2));
                system("pause");
                break;
            case 3:
                printf("Resultado: %.2lf\n",multi(num1,num2));
                system("pause");
                break;
            case 4:
                if(num2!=0){
                    printf("Resultado: %.2lf\n",divisao(num1,num2));
                } else {
                    printf("Erro: Divisão por zero não é permitida.\n");
                }
                system("pause");
                break;
            case 0:
                printf("\nEncerrando a aplicacao\n");
                break;
            default: printf("\nopcao invalida!\n");
        }
        
    }while(op!=0);
    
    return 0;
}

