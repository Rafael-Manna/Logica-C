/****************************************
Questao de funçoes
recebe 3 notas e o tipo de media e retorna ela 
****************************************/
#include <stdio.h>
float class(float a, float b ,float c, char d){
    float media;
    if ( d == 'P' || d == 'p'){
    media = (a*4+b*5+c*6)/(20);
    }
    if ( d == 'A' || d == 'a'){
    media = (a+b+c)/3;
    }
    return media;
}
int main()
{
  float n1,n2,n3,retorno;
  char letra;
  
          printf("\nDigite a 1° nota: ");
        scanf("%f",&n1);
          printf("\nDigite a 2° nota: ");
        scanf("%f",&n2);
          printf("\nDigite a 3° nota: ");
        scanf("%f",&n3);
        printf("\nDigite A para aritimetica e P para ponderada:");
        scanf(" %c",&letra);
    retorno = class(n1,n2,n3,letra);
    if (letra == 'A' || letra == 'a'){
        printf("\n Sua media aritimetica é: %.2f",retorno);
    }
     if (letra == 'P' || letra == 'p'){
        printf("\n Sua media aritimetica é: %.2f",retorno);
    }

    return 0;
}
