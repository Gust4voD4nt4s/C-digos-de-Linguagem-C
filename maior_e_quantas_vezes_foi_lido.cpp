#include <stdio.h>

int main() {
	
	int qtd,cont;
	float num,maior;
	cont = 0;
	
	printf("Digite a quantidade de numeros!\n");
	scanf("%d",&qtd);
	
	for(int i = 1; i <= qtd; i++) {
		printf("digite o %d numero: ", i);
		scanf("%f",&num);
		if (i == 1) {
		maior = num;
		}
		if (num > maior) {
			maior = num;
			cont = 0;
		}
		if (num == maior) {
			cont++;
		}
	}
	printf("%f, %d",maior,cont);
}
