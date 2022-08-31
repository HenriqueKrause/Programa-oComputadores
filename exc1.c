// Fazer um programa que lê as 3 notas de um aluno de Programação de Computadores (v1, v2
// e MT, onde MT é a média dos trabalhos). O programa calcula e imprime a média do aluno,
// usando a fórmula Média=(3*v1+3*v2+4*MT)/10.


#include <stdio.h>

int main(){
    int v1=8, v2=9, mt=10;
    float media;

    media = (3*v1+3*v2+4*mt)/10;
    printf("A media do aluno e: %f", media);

    return 0;
    system ("pause");
}