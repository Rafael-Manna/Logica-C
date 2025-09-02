/******************************************************************************
Questao de String
 programa que substitui a letra que voce escolher para qual voce escolher em uma frase.
*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char palavra [20],letra1,letra2;
    int tam;
    printf("digite uma palavra: ");
    scanf(" %[^\n]",palavra);
    printf("Digite duas letras: ");
    scanf(" %c", &letra1);
    scanf(" %c", &letra2);
    tam = strlen(palavra);
    for(int i = 0; i<tam;i++){
        if(palavra[i] == letra1){
            palavra[i] = letra2;
        }
    }
    printf("%s",palavra);
    return 0;
}
