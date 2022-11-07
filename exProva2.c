// Crie uma estrutura para armazenar os dados de círculos (ponto central e raio). Crie um
// algoritmo que permita ler, armazenar e imprimir uma quantidade TAM de círculos.

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Armazenar dados do circulo 
    int tam=1;
    int i;
    struct circulo{
        int central;
        int raio;
    };
    struct circulo *circulos = (struct circulo*) malloc(tam * sizeof(struct circulo));

    //Leitura
    for(i=0; i<tam; i++){
        printf("Digite o valor do pronto central do circulo:");
        scanf("%d", &circulos[i].central);
        printf("Digite o valor do raio do circulo:");
        scanf("%d", &circulos[i].raio);

    }

    //Impressao
        for(i=0; i<tam; i++){
            printf(" O ponto central do circulo é: %d \n O raio do circulo é: %d \n", circulos[i].central, circulos[i].raio);
        }

    return 0;

    }
