//Aluno: Gustavo Henrique Dantas Santos
#include <stdio.h>

int main() {
	FILE *arq;
	char frase[50];
	arq = fopen("2-oat.txt","w");
	
	if (arq == NULL) {
		printf("Arquivo nao encontrado");
	}else {
		printf("Digite a frase que vc quer gravar no arquivo: ");
		gets(frase);
		fprintf(arq,"%s",frase);
	}
	fclose(arq);
	printf("Gravacao de arquivo bem sucedida!");
	return 0;
}
//Arquivo txt que vai ser Gravado os dados
//2-oat.txt
