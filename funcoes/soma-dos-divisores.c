/******************************************************************************
Escreva uma função que leia 5 números inteiros positivos 
(utilize uma função que leia esse número e verifique se ele é positivo). 
Para cada número informado escrever a soma de seus divisores (exceto ele mesmo).
Crie uma função SomaDivisores para obter a soma.
*******************************************************************************/
#include <stdio.h>
int lerpositivo(){
    int n;
    do{
        printf("Digite um numero inteiro e positivo:\n");
        scanf("%d",&n);
         if(n>=0){
             return n;
         } else{
         printf("Numero inválido, tente novamente.\n");
         }
    }while(n<0);
}
int sdiv(int n){
    int soma = 0;
    
    for(int i = 1; i<n;i++){
     if(n%i==0){
         soma = soma + i;
     }
    }
 return soma;    
}
int main(){
    int numeros [5];
    for(int i = 0; i<5;i++){
        numeros[i] = lerpositivo();
    }
    for(int i = 0; i<5;i++){
        printf("A soma dos divisores do valor %d, recebe o valor: %d\n", numeros[i],sdiv(numeros[i]));
    }
    
}

