/******************************************************************************
Questao de string
Programa que receba uma string e mostre de tras para frente
*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
     char palavra[30],pinversa[30];
     int j = 0;
    int tam = 0;
    printf("Escreva uma palavra: ");
    scanf(" %[^\n]", palavra);
    tam = strlen(palavra);
    for (int i = tam - 1; i>=0;i--){
     pinversa[j] = palavra[i];
     j++;
    }
printf ("Palavra ao contrario: %s",pinversa);
    return 0;
}