/******************************************************************************
3. Escreva uma função que recebe um valor inteiro e verifica se ele é par.
A função deve retornar 1 se o número for par e 0 se for ímpar.
*******************************************************************************/
#include <stdio.h>
int parint(int n){
    if( n %2 == 0){
        return 1; // par
    } else {
        return 0; //impar
    }
}
int main()
{
    int a, b;
    printf("digite um numero:");
    scanf("%d",&a);
    b = parint(a);
    if (b==0){
        printf("O numero digitado é impar");
    }
     if (b==1){
        printf("O numero digitado é par");
    }
    return 0;
}
