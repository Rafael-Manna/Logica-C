#include <string.h>
#include <stdio.h>
int main()
{
  char matriz[3][30];
  printf("Digite 3 nomes:");
  for (int i=0 ; i<3; i++){
      scanf("%s", matriz[i]);
  }
for (int i = 0; i < 3; i++) {
    printf("|||||||||||||||||||||||||||||\n");
    printf("Nome: %s\n", matriz[i]);
    printf("Primeiro caractere: %c \n", matriz[i][0]);
    printf("Numero de caractere: %d \n", (int)strlen(matriz[i]));
       

}
    return 0;
}