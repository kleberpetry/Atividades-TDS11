#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int numeros[10][6],linha,coluna,gerado,apoio=1;
    srand (time(NULL));
    
    for(linha=0;linha<10;linha++){
        for(coluna=0;coluna<6;coluna++){
            numeros[linha][coluna]=1+rand()%60;
        }
        apoio=0;
        while(apoio<6){ 
            if(numeros[linha][apoio]==numeros[linha][coluna]){ 
                numeros[linha][coluna]=1+rand()%60;
                apoio=0; 
                
            }else{
                coluna++;
            }
            apoio++;
        }
            
        
    }
    
    for(linha=0;linha<10;linha++){
        for(coluna=0;coluna<6;coluna++){
            printf("[%d]",numeros[linha][coluna]);
        }
        printf("\n");
    }
    
    
    return 0;
}

