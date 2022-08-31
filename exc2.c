// Utilizando o programa anterior, fazer um novo programa que verifica se o aluno atingiu a
// média 7. Caso positivo, o programa imprime a mensagem “aprovado por média”. Caso
// contrário, o programa calcula e imprime o valor necessário na optativa, apresentando a
// mensagem apropriada. (Lembre-se que a média dos trabalhos não pode ser substituída
// pela optativa).

#include <stdio.h>

    int main(){
    int v1=8, v2=9, mt=10;
    float media, optativa;

    media = (3*v1+3*v2+4*mt)/10;
    printf("A media do aluno e: %f", media);

if (media >= 7){
    printf("Aprovado por media");
}
else if (media < 7 ){
    optativa = (7*10 - 3*v1 - 3*v2 - 4*mt)/4;
    printf("O aluno deve tirar %f na optativa", optativa); 
}

 return 0;
 system ("pause");
}
