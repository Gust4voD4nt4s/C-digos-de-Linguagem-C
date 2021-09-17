#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <conio.c>
#include <locale.h>

char opl;
char usr[50],senha[10];
FILE *ArqUsr;

int main() {
	setlocale(LC_ALL, "Portuguese");

	do {
		textcolor(WHITE);
		clrscr();
		gotoxy(26,2);
		printf("*---------------------------*");
		gotoxy(26,3);
		printf("|******CRIPTOFAGO-LOGIN*****|");
		gotoxy(26,4);
		printf("*---------------------------*");
		gotoxy(26,5);
		printf("| 1: Fazer login            |");
		gotoxy(26,6);
		printf("|                           |");
		gotoxy(26,7);
		printf("| 2: Fazer cadastro         |");
		gotoxy(26,8);
		printf("|                           |");
		gotoxy(26,9);
		printf("| 3: Voltar                 |");
		gotoxy(26,10);
		printf("|                   Opção:  |");
		gotoxy(26,11);
		printf("*---------------------------*");
		gotoxy(52,10);
		opl=getch();

		switch(opl) {
			case '1': { //login
				gotoxy(3,16);
				printf("Digite seu nome de usuário: ");
				gets(usr);//Usuário digita o nome com que quer se logar
				gotoxy(3,17);
				printf("Digite sua senha: ");
				textcolor(BLACK);
				gets(senha);
				textcolor(WHITE);//usuário informa sua senha

				if(ArqUsr!=NULL) { //se o arquivo com nome e senha não for inexistente
					/*
					Aqui está a parte difícil: Como eu faço para procurar uma
					palavra específica no arquivo (a senha), e compará-la com a senha
					informada pelo usuário?
					*/
				} else {
					gotoxy(3,16);
					printf("Nenhum usuário cadastrado!");
					break;
				}

			}

			case '2': { //cadastro

				textbackground(BLACK);
				textcolor(WHITE);
				gotoxy(3,16);
				printf("Digite seu nome: ");
				gets(usr);//Usuário insere o nome com que quer ser cadastrado
				gotoxy(3,17);
				printf("Digite sua senha: ");
				textcolor(BLACK);
				gets(senha);//usuário digita sua senha

				ArqUsr=fopen(usr,"a");//fazer um arquivo com o nome do usuário

				textcolor(WHITE);
				gotoxy(3,18);
				printf("Usuário cadastrado com sucesso!");
				fprintf(ArqUsr,"*%s",senha);//grava no arquivo a senha do usuário, antecedida pelo caractere *
				fclose(ArqUsr);//fecha o arquivo
				getch();
			}
			case '3':
				opl=0;
				break;
			default :
				printf("\a");
				break;
		}
	} while (opl!=0);

}
