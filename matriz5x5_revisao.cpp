#include <stdio.h>

int main() {
	float num[5][5],soma;
	int L,C;

	for (L = 0; L<5; L++) {
		for (C = 0; C<5; C++) {
			printf("Digite o valor da linha %d coluna %d: ",L+1,C+1);
			scanf("%f",&num[L][C]);
			if(L == C) {
				soma= soma + num[L][C];
			}
		}
	}
	for (L=0; L<5; L++) {
		printf("\n");
		for (C=0; C<5; C++) {
			printf("%2.f ",num[L][C]);
		}
	}
	printf("\nA soma dos valores da matriz em diagonal eh %f",soma);
}
