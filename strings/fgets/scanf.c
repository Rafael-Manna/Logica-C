
#include <stdio.h>
#include <string.h>
int main()
{
    char nome2[50];
    char nome[50];
    printf("NOME COMPLETO:\n");
    scanf("%[^\n]", nome);
    printf("Seu nome completo é:%s",nome);
       
    printf("\nDENOVO COMPLETO:");
    getchar(); //usar toda vez que for usar um fgets depois de usar o scanf !!!
    fgets(nome2,50,stdin);
    printf("\nNome printado com o fgets :%s",nome2);


    return 0;
}