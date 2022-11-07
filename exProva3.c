// Crie uma estrutura para armazenar os dados de retângulos (pontos diagonais inferior-
// esquerda e superior-direita). Crie um algoritmo que permita ler, armazenar e imprimir uma
// quantidade TAM de retângulos.


#include <stdio.h>
#include <stdlib.h>

int main(){

//armaenamento
int tam=1;
int i;
struct retangulo{
    int diagonalR;
    int diagonalL;
};

struct retangulo *retangulos = (struct retangulo*) malloc(tam *sizeof(struct retangulo));

//leitura 

printf("Digite o valor da diagonal direita do retangulo:");
scanf("%d", &retangulos[i].diagonalR);
printf("Digite o valor da diagonal esquerda do retangulo:");
scanf("%d", &retangulos[i].diagonalL);

//impressao

for(i=0; i<tam; i++){
    printf("O valor da diagonal direita do retangulo é %d", retangulos[i].diagonalR);
    printf("O valor da diagonal esquerda do retangulo é %d", retangulos[i].diagonalL);
}

return 0;
}