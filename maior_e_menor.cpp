#include <stdio.h>

int main() {
	float num,maior,menor;
	int i;
	for (i = 1; i < 11; i++) {
		printf("Digite o %d numero:\n",i);
		scanf("%f",&num);
		if (i == 1) {
		maior = num;
		menor = num;
	}
		else if (i > 1) {
			if (num > maior) {
				maior = num;
			}
			else if(num < menor) {
				menor = num;
			}
		}
	}	
	printf ("O maior valor eh: %f\n", maior);
	printf ("O menor valor eh: %f", menor);
	return 0;
}
