//Criar um programa que mostre quantos caracteres um nome tem (não deve ser contabilizados espaços em branco)
#include <stdio.h>
#include <string.h>
int main()
{
    int tam=0, i;
    char nome[30];
    printf("Digite seu nome: ");
    fgets(nome,30,stdin);
  for(i = 0 ;nome[i];i++){
      if(nome[i]!=' ' && nome[i] != '\n' ){
          tam++;
      }
  }
printf("Numero de caracteres (sem espaço): %d",tam);
    return 0;
}
