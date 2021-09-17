#include <stdio.h>
int i;
float num[3],result;
float recebervalores(float a[]) {
	for (i=0; i<3; i++) {
		printf("Digite o %d valor: ",i+1);
		scanf("%f",&a[i]);
	}
	return 0;
}
float soma(float a[]) {
	float res;
	for (i=0; i<3; i++) {
		res = res + a[i];
	}
	printf("A soma eh %f\n",res);
	return 0;
}


int main() {
	float num[3],result;
	recebervalores(num);
	soma(num);
}
