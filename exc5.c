// Usando o comando while, faça um programa que calcule o fatorial de um número inteiro n.


#include <stdio.h>

int main(){

    int number=5, i=1, fat=1;

    while (i<=number){
        fat = fat*i;
        i++;

    }

    printf("O fatorial de %d e: %d", number, fat);
}