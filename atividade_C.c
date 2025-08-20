#include <stdio.h>
int main ()
{

	int matricula;
	printf("Qual sua matricula?\n");
	scanf("%d",&matricula);

	char Disciplina[128];
	printf("Qual disciplina?\n");
	scanf("[^\n]", Disciplina);

	char Turma[32];
	printf("Turma?\n");
	scanf("[^\n]", Turma);

	char aluno[500];
	printf("Aluno?\n");
	scanf("[^\n]", aluno);

	printf("Matricula: %d\n",matricula);

	float altura;
	printf("Qual a altura em metros?");
	scanf("%f", &altura);
	
	float Peso;
	printf("Qual o peso?");
	scanf("%f", &Peso);


	return 0;

;}


