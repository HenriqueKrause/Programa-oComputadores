// Construa uma estrutura para armazenar pontos (coordenadas x e y) no plano cartesiano. Crie
// um algoritmo que permita ler, armazenar e imprimir uma quantidade TAM de pontos.

#include <stdio.h>
#include <stdlib.h>

int main(){

    //armazenamento
    int tam = 2;
    int i;

    struct ponto{
        int x;
        int y;
    };

    struct ponto *pontos = (struct ponto*) malloc(tam * sizeof(struct ponto));
//leitura
    for(i = 0; i < tam; i++){
        printf("Digite o valor de x: ");
        scanf("%d", &pontos[i].x);
        printf("Digite o valor de y: ");
        scanf("%d", &pontos[i].y);
    }
//impressao
    for(i = 0; i < tam; i++){
        printf("x: %d, y: %d \n", pontos[i].x, pontos[i].y);
    }

    return 0;
}

