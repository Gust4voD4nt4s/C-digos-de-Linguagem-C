//Aluno: Gustavo Henrique Dantas Santos

#include <stdio.h>

int main() {
	FILE *arq;
	char c;
	arq = fopen("1-oat.txt","r");

	if (arq == NULL) {
		printf("Arquivo nao encontrado");
	} else {
		while((c = getc(arq)) != EOF) {

			printf("%c",c);

		}
	}
	return 0;
}
//--------------------------------------------------------------------------------------------------------------------------------------------//
//arquivo txt que vai ser lido
//1-oat.txt
//Este arquivo esta sendo lido!
