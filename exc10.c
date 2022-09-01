// Faça um programa que lê n números inteiros (cujo valor máximo não ultrapassa 1000).
// Após, o programa imprime em ordem crescente os números não duplicados do vetor.


#include <stdio.h>
#include <stdlib.h>

 int compar(const void *a, const void *b){
     return (*(int*)a - *(int*)b);
}

int main(int argc, char *argv[]){
    int vetor[1000]={1, 2, 4, 6, 5 ,10, 19, 3, 11, 15};

    qsort(vetor, 1000, sizeof(int), compar);

    for (int i=0;i<1000;i++){
        if (vetor[i] != vetor[i+1]){
            printf("%d ", vetor[i]);
        }
        }
        return 0;
    }
