// Dados três números inteiros correspondentes, respectivamente, ao dia, mês e ano de
// nascimento de uma pessoa e três outros números correspondentes ao dia, mês e ano
// corrente (ex. data de hoje), calcular e imprimir a idade em anos completos. Verificar se as
// datas são compatíveis (nascimento <= corrente).

#include <stdio.h>

int main(){
int dayImp=23, monthImp=12, yearImp=2002, dayNow=31, monthNow=8, yearNow=2022, age;

age = yearNow - yearImp;
printf("A idade do individuo e: %d", age);

return 0;


}