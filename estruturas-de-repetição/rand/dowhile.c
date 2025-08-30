#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char jn[5];
			srand(time(NULL));
	do {
 system ("clear");
		int na = (rand() % 20) + 70;
		printf("Numero Aleatorio: %d\n", na);
		printf ("deseja aleatorizar novamente?\n (informe sim ou nao)\n");
		scanf("%s",jn);
		fflush(stdin);//sempre usar depois de um scan de %s ou %c
	} while ((strcmp(jn, "sim")) == 0);
	printf("Programa encerrado.\n");

	return 0;
}
