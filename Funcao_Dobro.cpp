#include <stdio.h>
int res;
int dobro(int num) {
	num = num * 2;
	return num;
}

int main() {
	res = dobro(3);
	printf("O dobro de %d eh %d",res/2,res);
}
