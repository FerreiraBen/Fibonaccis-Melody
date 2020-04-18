/*
    PROJETO PESSOAL PROGRAMAÇÃO EM C
    UNIVERSIDADE FEDERAL DO AMAZONAS - 2018
    
    -  -  -  -  -      Fibonacci Sequence Song      -  -  -  -  -
    Foram atribuidas uma nota músical para cada número contido na escala de [0-9].
    Ao verificar os números da sequencia de Fibonacci, o programa irá imprimir a nota 
    correspondente ao número da nota músical.
    Para algarismos co
    ordem da esquerda para a direita do número. Exemplo: O número 125 resultará na
    impressão das notas músicais número 1, 2 e 5 nesta ordem.
    
    ================================================
    Tabela de Notas musicais atribuídas aos números:
    ================================================
                                                    
                D#          |           0                           
                E           |           1
                F#          |           2
                G#          |           3
                A           |           4
                B           |           5
                C#          |           6
                D#2         |           7
                E2          |           8
                F#2         |           9
                                                                                                    
    ------------------------------------------------
  

    @author Ben Ferreira, 
    Engenharia da Computação

*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dgtlen(int n){
    if(n == 0) return 1;
    else{
        int c;
        for(c = 0; n; n /= 10)
            c++;
        return c;
    }
}


int main(){
    long long int aux,digito,hug;
    long long int fibo_bef=0,fibo_aft=1,play=0;
    int quantos;
    printf("Quantos números da sequencia de Fibonacci você deseja gerar notas musicais? (será geradas no MÍNIMO 2 números).\n");
    scanf("%d",&quantos);

    printf("\tFibonacci number: %d\n",fibo_bef);
    printf("\t\tD#\n\n");
    printf("\tFibonacci number: %d\n",fibo_aft);
    printf("\t\tE\n\n");

    
    for(int i = 0; i<quantos-2; i++){
        aux = fibo_bef;
        fibo_bef = fibo_aft;
        fibo_aft = aux + fibo_aft;
        

        printf("\tFibonacci number: %d\n",fibo_aft);

        if(fibo_aft<10){
            switch(fibo_aft){
                case 0:
                    printf("\t\tD#\n");
                    break;
                case 1:
                    printf("\t\tE\n");
                    break;              
                case 2:
                    printf("\t\tF#\n");
                    break;          
                case 3:
                    printf("\t\tG#\n");
                    break;              
                case 4:
                    printf("\t\tA\n");
                    break;              
                case 5:
                    printf("\t\tB\n");
                    break;                
                case 6:
                    printf("\t\tC#\n");
                    break;                 
                case 7:
                    printf("\t\tD#2\n");
                    break;                 
                case 8:
                    printf("\t\tE2\n");
                    break;                   
                case 9:
                    printf("\t\tF#2\n");
                    break;                  
                default:
                    break;
            }
        }

        else if(fibo_aft>=10){
            int digito = fibo_aft;
            int hug = dgtlen(digito);
            int vetor[hug];

            for(int i=hug-1; i>=0; i--){
                aux = digito % 10;
                digito = digito / 10;
                vetor[i]=aux;
            }


            for(int i=0;i<hug;i++){
                switch(vetor[i]){
                    case 0:
                        printf("\t\tD#\n");
                        break;
                    case 1:
                        printf("\t\tE\n");
                        break;
                    case 2:
                        printf("\t\tF#\n");
                        break;
                    case 3:
                        printf("\t\tG#\n");
                        break;
                    case 4:
                        printf("\t\tA\n");
                        break;
                    case 5:
                        printf("\t\tB\n");
                        break;
                    case 6:
                        printf("\t\tC#\n");
                        break;
                    case 7:
                        printf("\t\tD#2\n");
                        break;
                    case 8:
                        printf("\t\tE2\n");
                        break;
                    case 9:
                        printf("\t\tF#2\n");
                        break;
                    default:
                        break;
                }
              
            }

        }

        printf("\n");

        
    }


    return 0;

}

