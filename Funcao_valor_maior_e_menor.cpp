#include <stdio.h>

int Recebervalores(int valor1, int valor2) {
	if (valor1 > valor2) {
		printf("%d eh maior que %d\n",valor1, valor2);
	}else{
		printf("%d eh maior que %d\n",valor2, valor1);
	}
}
int main() {
	int res;
	res = Recebervalores(3,7);
	res = Recebervalores(9,7);
}
