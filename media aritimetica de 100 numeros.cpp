#include <stdio.h>

int main() {
	int num,result,x;
	result = 0;
	for (num = 1; num < 5; num++) {
	printf("Digite %d numero inteiro: ",num);
	scanf("%d",&x);
	result = result + x;
	}
	result = result / 100;
	printf("A media aritimetica eh: " + result);
	return 0;
}
