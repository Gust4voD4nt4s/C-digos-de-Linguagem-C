//Aluno: Gustavo Henrique Dantas Santos
#include<stdio.h>
int i;
void ImparPar(int a[]) {
	for (i = 0; i<5; i++) {
		if (a[i] % 2 == 0) {
			printf("O numero %d eh par!\n",a[i]);
		} else {
			printf("O numero %d eh impar\n",a[i]);
		}
	}
}
int main() {
	int num[5];
	for(i = 0; i<5; i++) {
		printf("Digite o %d valor numerico: ",i+1);
		scanf("%d",&num[i]);
	}
	ImparPar(num);
	return 0;
}
