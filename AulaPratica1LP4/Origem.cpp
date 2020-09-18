#include<stdio.h>
#include<stdlib.h>

typedef float prova;
typedef int RU;

struct notasAluno
{
	RU matricula;
	prova nota1, nota2;
}; typedef struct notasAluno n_aluno;


int main() {

	n_aluno aluno;
	prova media = 0;

	printf("Digite a matricula do aluno: ");
	scanf_s("%d", &aluno.matricula);

	printf("\n\n Digite a primeira nota do aluno: ");
	scanf_s("%f", &aluno.nota1);
	printf("\n Digite a segunda nota do aluno: ");
	scanf_s("%f", &aluno.nota2);

	media = (aluno.nota1 + aluno.nota2) / 2;

	printf("\n\n Matricula do aluno: %d", aluno.matricula);
	printf("\n Media total do aluno: %.2f\n\n", media);

    system("pause");
	return 0;
}