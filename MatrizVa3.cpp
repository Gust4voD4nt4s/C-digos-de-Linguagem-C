//Aluno: Gustavo Henrique Dantas Santos
#include <stdio.h>
int main() {
	int num[5][5],L,C,soma;
	soma = 0;
	for(L=0; L<5; L++) {
		for(C=0; C<5; C++) {
			printf("Digite o numero da linha %d coluna %d: ",L+1,C+1);
			scanf("%d",&num[L][C]);
			if(L==C) {
				soma = soma + num[L][C];
			}
		}
	}
	for (L=0; L<5; L++) {
		printf("\n");
		for (C=0; C<5; C++) {
			printf("%d ",num[L][C]);
		}
	}
	printf("\nA soma dos valores na diagonal principal eh: %d",soma);
}
