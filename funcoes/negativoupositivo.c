/******************************************************************************
4. Escreva uma função que recebe um valor inteiro e verifica se o valor é positivo, negativo ou zero.
A função deve retornar 1 para valores positivos, -1 para negativos e 0 para o valor 0.

*******************************************************************************/
#include <stdio.h>
int parint(int n){
    if( n > 0){
        return 1; // positivos
    } else if (n<0){
        return -1; //negativos
    }
    else{
        return 0;
    }
}
int main()
{
    int a, b;
    printf("digite um numero:");
    scanf("%d",&a);
    b = parint(a);
    if (b==0){
        printf("O numero digitado é zero");
    }
     if (b==1){
        printf("O numero digitado é positivo");
    }
    if (b==-1){
        printf("O numero digitado é negativo");
    }
    return 0;
}
