/******************************************************************************
1. Escreva uma função que receba dois números inteiros e retorne o maior deles.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int numero(int i,int j){
    if(i>j){
        return i;
    }
    else if(j>i){
        return j;
    }
}
int main()
{
    int a,b,maior = 0;
     printf("Digite o valor:");
     scanf("%d",&a);
          printf("Digite o segundo valor :");
     scanf("%d",&b);
     maior = numero(a,b);
     printf("%d",maior);

    return 0;
}
