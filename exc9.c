// Faça um programa que lê n x m valores decimais, armazenando-os em uma matriz com n
// linhas e m colunas. Após, para cada linha da matriz, o algoritmo calcula a média e conta
// quantos elementos estão acima da média calculada, imprimindo estas informações.

#include <stdio.h>

int main(){
    int i, n=5, m=5,j =3, k=4, l=6, cont;
    float soma, media;
    float matriz[5][5];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    for(k=0; k<n; k++){
        soma = 0;
        cont = 0;
        for(l=0; l<m; l++){
            soma = soma + matriz[k][l];
        }
        media = soma / m;
        for(l=0; l<m; l++){
            if(matriz[k][l] > media){
                cont++;
            }
        }
        printf("A media da linha %d eh: %.2f");
}
return 0;
}