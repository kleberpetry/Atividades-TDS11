#include<stdio.h>

int main(){
    double producao;
    int qtdeCaminhao;
    printf("\nDigite a producao: ");
    scanf("%lf",&producao);
    printf("\nDigite qtde de caminhoes: ");
    scanf("%i",&qtdeCaminhao);
    double caminhoes[qtdeCaminhao][3], capacidadeTotal, custoTotal = 0; 
    int linha;
    for(linha=0;linha<=qtdeCaminhao;linha++){ 
        printf("\nDigite capacidade do caminhao: ");
        scanf("%lf",&caminhoes[linha][0]);
        capacidadeTotal+=caminhoes[linha][0];
        printf("\nDigite a quilometragem percorrida: ");
        scanf("%lf",&caminhoes[linha][1]);
        printf("\nDigite o valor por KM rodado: ");
        scanf("%lf",&caminhoes[linha][3]); 
    }
    if(capacidadeTotal>producao){ 
        printf("\nEmpresa Apta!\n");
        printf("\nProducao: %.2lf",producao);
        double custoTransp;
        for(linha=0;linha<qtdeCaminhao;linha++){
            printf("[%lf] [%lf] [%lf]",caminhoes[linha][0],caminhoes[linha][1],caminhoes[linha][2]);
            if((caminhoes[linha][0])>=45){
                custoTransp=((caminhoes[linha][0])*(caminhoes[linha][1]))*((caminhoes[linha][2])*0.75);
            }else{
                custoTransp=((caminhoes[linha][0])*(caminhoes[linha][1]))*(caminhoes[linha][2]);
            }
            custoTotal+=custoTransp;
            producao-=caminhoes[linha][0];
            printf("\ncaminhao %d",linha); 
            printf("\nCusto total: %.2lf",custoTotal);
            printf("\nProducao restante: %.2lf",producao);
        }
    }
    
    printf("Fim do programa\n"); 
    
    return 0;
}

