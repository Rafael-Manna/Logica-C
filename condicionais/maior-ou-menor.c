/******************************************************************************
Ler duas variáveis inteiras A e B e garantir que A e B fiquem em ordem crescente, ou seja, 
a variável deverá armazenar o menor valor fornecido e a variável B o maior
*******************************************************************************/
#include <stdio.h>

int main()
{
   int a,b, aux =0;
    printf("valor A:");
    scanf("%d", &a);
    printf("valor b:");
    scanf("%d", &b);
    if (a>b){
    aux=b;
    b=a;
    a=aux;
    }
    printf("valor A (menor):%d\n",a);
 printf("valor B (maior):%d",b);
    return 0;
}