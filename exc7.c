// Faça um programa que recebe um número inteiro e verifica se o número é primo ou não,
// escrevendo uma mensagem apropriada. 

#include <stdio.h>

int main(){
int primo = 7;

if(primo %2 == 0){
    printf("O numero %d nao e primo", primo);

}else{
    printf("O numero %d e primo", primo);


}

return 0;
}