// Faça um programa que lê n números decimais (no máximo 10000 valores), armazenando-os
// em um vetor. Após, o programa ordena este vetor usando o método “Bubble Sort”.
// Finalmente, o programa imprime o vetor ordenado.


#include <stdio.h>

int comparar(const *a, const *b){
    return(*(int*)a - *(int*)b);
}

int main(int argc, char *argv[]){
    int vetor[10000]={1, 2, 4, 6, 5 ,10, 19, 3, 11, 15};
    int aux;
    int n=10;
    

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%d ", vetor[i]);
    }
    return 0;
    
   
    
}