#include <stdio.h>

int main()
{
    int a,b, aux =0;
    printf("valor A:");
    scanf("%d", &a);
    printf("valor b:");
    scanf("%d", &b);
    aux=b;
    b=a;
    a=aux;
printf("valor A trocado:%d",a);
 printf("valor B trocado:%d",b);

    return 0;
}