/******************************************************************************
Questao de struct/string
Busca de livros (pre-definidos pelo sistema)
*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    int j = 0;
    struct dados{
     char livro[30],autor[30];
     int ano;
    };
    struct dados dados[5];
 char nome[30];
 
 //
    strcpy(dados[0].livro,"piadocas");
    strcpy(dados[0].autor,"ellie");
           dados[0].ano = 2016;
    strcpy(dados[1].livro,"biblia");
    strcpy(dados[1].autor,"jesus");
           dados[1].ano = 30;
    strcpy(dados[2].livro,"cozinha");
    strcpy(dados[2].autor,"palmirinha");
           dados[2].ano = 1980;
    strcpy(dados[3].livro,"money");
    strcpy(dados[3].autor,"pastor");
           dados[3].ano = 2016;
    strcpy(dados[4].livro,"pedro");
    strcpy(dados[4].autor,"joao");
           dados[4].ano = 2026;      
 //
 printf("Qual livro voce deseja buscar?\n");
 scanf(" %[^\n]", nome);
  for(int i = 0;i<5;i++){
     if(strcmp(dados[i].livro,nome) == 0){
         printf("\n  Nome do livro: %s",dados[i].livro);
         printf("\n  Autor do livro: %s",dados[i].autor);
         printf("\n  Data do livro: %d",dados[i].ano);
            j++;
 }
  }
  if (j == 0){
         printf("\nLivro Não encontrado");
     }
    return 0;
}
