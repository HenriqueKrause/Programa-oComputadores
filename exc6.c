// Faça um programa que recebe um número inteiro e imprime o somatório de seus divisores.

#include <stdio.h>

int main(){
    
    int number=10, i=1, sum=0;
    
    while (i<=number){
        if(number%i==0){
            sum = sum +i;
        }
    }

    printf("O somatorio dos divisores de %d e: %d", number, sum);

    return 0;
}