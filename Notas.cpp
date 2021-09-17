#include <stdio.h>

int main() {
	float va1,va2,va3,oat,nota;
	int menu;

	printf("\nInforme o que deseja fazer:");
	printf("\n1 - Inserir as notas:");
	printf("\n2 - Alterar as notas:");
	printf("\n3 - Calcular a nota final:");
	printf("\n4 - Informar o resultado final:");
	printf("\n999 - Encerrar programa.");
	scanf("%d",&menu);
	while (menu != 999) {
		switch(menu) {
			case 1:
				printf("\n Informe o valor da VA1: ");
				scanf("%f",&va1);
				while (va1< 0 || va1 > 15) {
					printf ("\n Informe o valor correta da VA1: ");
					scanf ("%f",&va1);
				}
				printf ("\n Informe o valor da VA2: ");
				scanf ("%f",&va2);
				while (va2< 0 || va2 > 25) {
					printf ("\n Informe o valor correta da VA2: ");
					scanf ("%f",&va2);
				}
				printf ("\n Informe o valor da VA3: ");
				scanf ("%f",&va3);
				while (va3< 0 || va3 > 35) {
					printf ("\n Informe o valor correta da VA3: ");
					scanf ("%f",&va3);
				}
				printf ("\n Informe o valor da OAT: ");
				scanf ("%f",&oat);
				while (oat< 0 || oat > 25) {
					printf ("\n Informe o valor correta da OAT: ");
					scanf ("%f",&oat);
				}
				break;
			case 2:
				printf("Completaremos no futuro!");
				break;
			case 3:
				nota = va1+va2+va3+oat;
				printf("A nota final foi %f .",nota);
				break;
			case 4:
				if (nota >= 70) {
					printf("Sua nota foi %2.f. Parabens, voce se livrou da disciplina de LP1!!!!",nota);
				} else if (nota < 50) {
					printf("Vishe, sua nota foi %2.f e vai fazer a materia de novo!!!",nota);
				} else {
					printf("Estude, pois tirou %2.f vai fazer a VF!!",nota);
				}
				break;
			default:
				printf("Valor incorreto");
		}
		printf("\nInforme o que deseja fazer:");
		printf("\n1 - Inserir as notas:");
		printf("\n2 - Alterar as notas:");
		printf("\n3 - Calcular a nota final:");
		printf("\n4 - Informar o resultado final:");
		printf("\n999 - Encerrar programa.");
		scanf("%d",&menu);
	}
	return 0;
}
