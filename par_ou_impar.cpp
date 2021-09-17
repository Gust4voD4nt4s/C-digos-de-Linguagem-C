#include <stdio.h>

int main() {
	int num,cont,cont1;
	num = 0;
	cont = 0;
	cont1 = 0;
	while (num != 1000) {
		printf("Dgite 1000 para finalizar\n");
		printf("digite um numero: ");
		scanf("%d",&num);
		cont++;
		if (num % 2 == 0) {
			cont1++;
		}
	}
	cont--;
	cont1--;
	printf("A quantidade de numeros pares eh: %d\n", cont1);
	printf("A quantidade de numeros digitados eh: %d", cont);
}

