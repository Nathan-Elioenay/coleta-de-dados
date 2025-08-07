#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("Cadastro de alunos \n\n");

    int idade , matricula;
    char nome[20];
    char curso[20];
    float altura;

    printf("Qual seu primeiro nome ?");
    scanf("%s", &nome);

    printf("Qual sua idade ?");
    scanf("%d", &idade);

    printf("Digite seu numero de matricula :");
    scanf("%d", &matricula);

    printf("Esta cursando qual faculdade ?");
    scanf("%s", &curso);

    printf("Qual sua altura ?");
    scanf("%f", &altura);

    printf("Dados do aluno :\n\n");

    printf("Nome do aluno : %s \n", nome);
    printf("Numero da matricula : %d \n", matricula);
    printf("Idade do aluno : %d anos \n", idade);
    printf("Curso : %s \n", curso);
    printf("Altura do aluno : %.2f cm \n\n",altura);
    return 0;
}
