#include <stdio.h>
int main()
{
    char nome[15]= "";
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Bem vindo, %s", nome);

    return 0;
}