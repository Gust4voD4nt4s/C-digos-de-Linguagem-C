#include <stdio.h>
#include <string.h>

int main()
{

	int opcao, idade;
	char nome[30], senha[30], nomec[30], senhac[30], lixo[30];
	idade = 0;

	while (idade < 18)
	{
		printf("\n1-Login");
		printf("\n2-Cadastrar\n");
		scanf("%d", &opcao);

		while (opcao < 1 || opcao > 2)
		{
			printf("Essa opcao nao existe!\n");
			printf("Digite novamente: ");
			scanf("%d", &opcao);
		}

		if (opcao == 1)
		{
			printf("Nome de usuario: ");
			gets(lixo);
			gets(nome);
			printf("Senha: ");
			gets(senha);
			if (strcmp(nome, nomec) == 0 && strcmp(senha, senhac) == 0)
			{
				printf("Seu login foi realizado com sucesso!");
				idade = 19;
			}
			else
			{
				printf("Seu nome de usuario ou senha estao incorretos!\n");
				printf("1-Tentar novamente!\n");
				printf("2-Cadastrar\n");
				scanf("%d", &opcao);
				while (opcao < 1 || opcao > 2)
				{
					printf("Essa opcao nao existe!\n");
					printf("Digite novamente: ");
					scanf("%d", &opcao);
				}

				while (opcao == 1)
				{
					printf("Nome de usuario: ");
					gets(lixo);
					gets(nome);
					printf("Senha: ");
					gets(senha);
					if (strcmp(nome, nomec) == 0 && strcmp(senha, senhac) == 0)
					{
						printf("Seu login foi realizado com sucesso!");
						idade = 19;
						opcao = 3;
					}
					else
					{
						printf("Seu nome de usuario ou senha estao incorretos\n");
						printf("1-Tentar novamente!\n");
						printf("2-Cadastrar\n");
						scanf("%d", &opcao);
					}
				}
			}
		}
		if (opcao == 2)
		{
			printf("Pagina de cadastro!\n");
			printf("Digite sua idade: ");
			scanf("%d", &idade);
			printf("Digite seu nome de usuario: ");
			gets(lixo);
			gets(nomec);
			printf("Digite sua senha: ");
			gets(senhac);
			if (idade < 18)
			{
				printf("Erro no cadastro!\n");
				printf("Voce eh menor de idade!");
				nomec[1] = 'a';
				senhac[1] = 'a';
			}
			else
			{
				printf("Cadastro efetuado sucesso!");
				idade = 0;
			}
		}
	}
	return 0;
}