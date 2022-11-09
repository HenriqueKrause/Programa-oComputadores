// Crie as estruturas necessárias para o armazenamento das informações de CD's de músicas de
// um acervo, como as seguintes:
// • Nome do Artista/Grupo/Banda
// • Nome do Álbum
// • Data de Lançamento do CD
// • Valor do CD
// • Nome da Produtora/Gravadora
// • Código e Nome do Gênero Musical
// • Total de Faixas de um disco e Número, Título e Duração de cada Faixa do CD
// • Algo que identifique se o CD é single (um CD), duplo (2 CDs) ou Box (+ de 2CDs).
// Crie um algoritmo que permita preencher as informações deste acervo de CDs e faça
// algumas operações sobre o acervo, como as seguintes:
// • Buscar por Artista/Grupo/Banda
// • Buscar por Álbum
// • Buscar por Gênero

// • Buscar por Título de Faixa
// • Listar (imprimir) todo o acervo (Artista, Álbum e Faixas)


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100

char artista [size][50];    
char album [size][50];
char data [size][50];
char valor [size][50];
char produtora [size][50];
char genero [size][50];
int continuar;
int op;


//todas as funções usadas no programa:
void cadastro ();
void buscaArtista();
void buscaAlbum();
void buscaGenero();
void buscaFaixa();
void todoAcervo();



int main (void){
    system("clear");
    
do{
    printf("_----------Bem vindo ao sistema de cadastro de CDs----------_\n");
    printf("\n1- Cadastro de cd");
    printf("\n2- Buscar por artista");
    printf("\n3- Buscar por album");
    printf("\n4- Buscar por genero");
    printf("\n5- Buscar por titulo da faixa");
    printf("\n6- Listar todo o acervo");
    printf("\n7- Sair");
    printf("\n\nEscolha uma opcao:\n ");
    scanf("%d", op);


    switch(op){
        case 1:
            cadastro();
            break;
        
        case 2:
             buscaArtista();
             break;
        case 3:
            buscaAlbum();
            break;
        case 4:
            buscaGenero();
            break;
        case 5:
            buscaFaixa();
            break;
        case 6:
            todoAcervo();
            break;
        case 7:
            printf("Saindo do programa...");
            system("exit");
            break;  
        defoult:
            printf("Opção invalida");
            break;

    }

 }while(op != 7);

return 0;

}

//função de cadastro de cds:

void cadastro(){
    static int linha;
    do{
        printf("Digite o nome do artista: ");
        scanf("%s", &artista[linha]);
        printf("\nDigite o nome do album: ");
        scanf("%s", &album[linha]);
        printf("\nDigite a data de lançamento: ");
        scanf("%i", &data[linha]);
        printf("\nDigite o valor do cd: ");
        scanf("%i", &valor[linha]);
        printf("\nDigite o nome da produtora: ");
        scanf("%s", &produtora[linha]);
        printf("\nDigite o nome do genero: ");
        scanf("%s", &genero[linha]);
        printf("\ndeseja continuar? (s/n)");
        scanf("%s", &continuar);
        linha++;
    }while(continuar =='s');
}

//função de busca por artista:
void buscaArtista(){
    char buscarArtista[50];
    int i;
    do{
        printf("Digite o nome do artista: ");
    scanf("%s", &buscarArtista);
    for(i=0; i<size; i++){
        if(strcmp(buscarArtista, artista[i])==0){
            printf("artista: %s", artista[i]);
            printf("\nAlbum: %s", album[i]);
            printf("\nData de lançamento: %i", data[i]);
            printf("\nValor: %i", valor[i]);
            printf("\nProdutora: %s", produtora[i]);
            printf("\nGenero: %s", genero[i]);
            printf("deseja fazer uma nova pesquisa: (s/n)");
            scanf("%s", &continuar);
        }
        }
    }while (continuar =='s');
}


//função de busca por album:
void buscaAlbum(){
    char buscarAlbum[50];
    int i;
    do{
        printf("Digite o nome do album que deseja fazer a busca:");
        scanf("%s", &buscarAlbum);
        for(i=0; i < size; i++){
            if(strcmp(buscarAlbum, album[i]) ==0);
            printf("artista: %s", artista[i]);
            printf("\nAlbum: %s", album[i]);
            printf("\nData de lançamento: %i", data[i]);
            printf("\nValor: %i", valor[i]);
            printf("\nProdutora: %s", produtora[i]);
            printf("\nGenero: %s", genero[i]);
            printf("deseja fazer uma nova pesquisa: (s/n)");
            scanf("%s", &continuar);
        }
    }while(continuar =='s');
}

//buscar por genero:

void buscaGenero(){
    char buscarGenero[50];
    int i;
    do{
        printf("Digite o nome do genero que deseja fazer a busca:");
        scanf("%s", &buscarGenero);
        for(i=0; i < size; i++){
            if(strcmp(buscarGenero, genero[i]) ==0);
            printf("artista: %s", artista[i]);
            printf("\nAlbum: %s", album[i]);
            printf("\nData de lançamento: %i", data[i]);
            printf("\nValor: %i", valor[i]);
            printf("\nProdutora: %s", produtora[i]);
            printf("\nGenero: %i", genero[i]);
            printf("deseja fazer uma nova pesquisa: (s/n)");
            scanf("%s", &continuar);
        }
    }while(continuar == "s");

}


//buscar por titulo da faixa:

void buscaFaixa(){
    char buscarFaixa[50];
    int i;
    do{
        printf("Digite o nome do genero que deseja fazer a busca:");
        scanf("%s", &buscarFaixa);
        for(i=0; i < size; i++){
            if(strcmp(buscarFaixa, genero[i]) ==0);
            printf("artista: %s", artista[i]);
            printf("\nAlbum: %s", album[i]);
            printf("\nData de lançamento: %i", data[i]);
            printf("\nValor: %i", valor[i]);
            printf("\nProdutora: %s", produtora[i]);
            printf("\nGenero: %s", genero[i]);
            printf("deseja fazer uma nova pesquisa: (s/n)");
            scanf("%s", &continuar);
        }
    }while (continuar == "s");
}

//listar todo o acervo:

void todoAcervo(){
    int i;
    for(i=0; i<size; i++){
        if(valor > 0){

        printf("artista: %s", artista);
        printf("\nAlbum: %s", album);
        printf("\nData de lançamento: %i", data);
        printf("\nValor: %i", valor);
        printf("\nProdutora: %s", produtora);
        printf("\nGenero: %s", genero);
        }
    }
}




