#include <stdio.h>
#include <math.h>

int main() {
	int i;
	float num,media;
	media = 0;
	for (i = 1; i < 11; i++) {
		printf("Digite o %d numero positivo\n",i);
		scanf("%f",&num);
		media = media + num;
		while (num < 0) {
			printf("Digite um numero positivo!\n");
			scanf("%f",&num);
		}
	}
	media = media / 10;
	printf("A media eh: %f", media);
}
