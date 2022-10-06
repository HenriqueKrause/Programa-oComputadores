// Faça um programa que lê n números decimais, armazenando-os em um vetor. Após, o
// programa identifica o menor número do vetor e imprime sua posição.

#include <stdio.h>

int main(){

    int vetor[10], i, menor, posicao;

    for(i = 0; i < 10; i++){
        vetor[i]= 1;
        if(vetor[i] < menor){
            menor = vetor[i];
            posicao = i;
            }
        }
        return 0;
}


 
  