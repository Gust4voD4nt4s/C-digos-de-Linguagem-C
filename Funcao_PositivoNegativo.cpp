#include <stdio.h>

int VerificarPositivoNegativo(int num) {
	if (num > 0) {
		printf("O numero e positivo!\n");
		return 1;
	}else if(num < 0) {
		printf("O numero eh negativo!\n");
		return -1;
	}else {
		printf("O numero eh igual a 0!\n");
		return 0;
	}
}

int main() {
	int res;
	res = VerificarPositivoNegativo(12);
	res = VerificarPositivoNegativo(0);
	res = VerificarPositivoNegativo(-7);
}
