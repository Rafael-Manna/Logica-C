/******************************************************************************
Escreva um programa que leia 5 valores inteiros e imprima para cada um o seu correspondente valor absoluto. 
Cria uma função Absoluto para esse fim.
*******************************************************************************/
#include <stdio.h>
int Absoluto(int n){
    if (n<=0){
        n = n*-1;
    }
    return n;
}
int main()
{
    int a;
    int val[5];
    for (int i=0;i<5;i++){
        printf("Digite um valor:");
        scanf("%d", &a);
        val[i] = Absoluto(a);
    }
     printf("valores digitados transformados em Absoluto:\n");
    for (int i=0;i<5;i++){
       
        printf(" %d \n",val[i]);
      
    }
    return 0;
}
