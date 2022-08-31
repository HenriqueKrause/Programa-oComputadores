// Usando o comando for, faça um programa que calcule o fatorial de um número inteiro n.

#include <stdio.h>

int main(){

    int number=5, i, fat;

for (i=1; i<=number; i++){
    fat = fat * i;
}
printf("O fatorial de %d e: %d", number, fat);  

}