#include<stdio.h>
#include<locale.h>
struct cliente{
    char nome[50];
    int cpf;
    char nascimento[50];
};
struct cliente clientes[200];
int codigo=0;
void venderIngresso(){
    system("cls");
    
    fflush(stdin);
    gets(clientes[codigo].nome);
    printf("\nDigite o CPF: ");
    scanf("%i",&clientes[codigo].cpf);
    printf("\nDigite a data de nascimento: ");
    fflush(stdin);
    gets(clientes[codigo].nascimento);
    codigo++;
    printf("\nIngresso vendido!\n");
    system("pause");
}

void listarIngresso(){
    system("cls");
    int x;
    for(x=0;x<codigo;x++){
	    printf("\n******************\n");
        printf("\nNome: %s",clientes[x].nome);
        printf("\nCPF: %i",clientes[x].cpf);
        printf("\nData Nascimento: %s\n",clientes[x].nascimento);
    }
    system("pause");
}

void validarIngresso(){
    system("cls");
    int busca,x,achou;
    printf("\nDigite o CPF da busca: ");
    scanf("%i",&busca);
    
    for(x=0;x<codigo;x++){
        if(busca==clientes[x].cpf){
            printf("\n*********\n");
            printf("\nNome: %s",clientes[x].nome);
            printf("\nCPF: %i",clientes[x].cpf);
            printf("\nNascimento: %s\n",clientes[x].nascimento);
            achou=1;
            system("pause");
            break;
        }else{
            achou=0;
        }
    }
    if(achou==0){
        printf("\nCadastro não encontrado\n");
        system("pause");
        
    }
    
}
void menu(){
    printf("\na)- vender ingressos");
    printf("\nb)- listar ingressos");
    printf("\nc)- validar ingressos");
    printf("\nd)- sair");
    printf("\nOpção: ");
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    char op;
    do{
        system("cls");
        menu();
        fflush(stdin);
        scanf("%c",&op);
        switch(op){
            case 'a':
                venderIngresso();
                break;
            case 'b':
                listarIngresso();
                break;
            case 'c':
                validarIngresso();
                break;
            case 'd':
                printf("\nsaindo!\n");
                system("pause");
                break;
            default:
                printf("\nopção inválida\n");
                system("pause");
        }
    }while(op!='d');
    return 0;
}

