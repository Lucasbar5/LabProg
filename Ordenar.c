#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RG 100
#define TAM 5
int main (){
    int vetor[TAM], control;
    srand(time(NULL));
    
    for(int i=0;i<5;i++){
        vetor[i]=rand()%RG;
        printf("[%d] - ", vetor[i]);
    }
    puts("\n------------------");
    
    for(int k=0;k<5;k++){
        for (int i=0;i<TAM-1;i++){
            // printf("Antes da troca: [%d]-[%d]", vetor[i], vetor[i+1]);
            if (vetor[i]>vetor[i+1]){
                control = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = control; 
            }
        }
        for (int i=0;i<5;i++){
        printf("[%d] - ", vetor [i]);
        }
        puts("");
    }
    puts("\nVetor Ordenado");
    for(int i=0;i<5;i++){
        printf("[%d] - ", vetor[i]);
    }
    puts("");

    return 0;
}
