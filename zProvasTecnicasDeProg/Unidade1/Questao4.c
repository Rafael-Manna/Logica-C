/******************************************************************************
Questao de struct/string
Cadastro de livros // busca de livros
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
 for(int i = 0;i<5;i++){
      printf("Armazene o %d° livro: ",i+1);
     scanf(" %[^\n]",dados[i].livro);
      printf("Autor do %d° livro: ",i+1);
     scanf(" %[^\n]",dados[i].autor);
      printf("data do %d° livro: ",i+1);
     scanf(" %d", &dados[i].ano);
 }
 printf("Qual livro voce deseja buscar?\n");
 scanf(" %[^\n]", nome);
  for(int i = 0;i<5;i++){
     if(strcmp(dados[i].livro,nome) == 0 ){
         printf("\nNome do livro: %s",dados[i].livro);
         printf("\nAutor do livro: %s",dados[i].autor);
         printf("\nData do livro: %d",dados[i].ano);
            j++;
    
 }
  }
  if (j == 0){
         printf("\nLivro Não encontrado");
     }
    return 0;
}