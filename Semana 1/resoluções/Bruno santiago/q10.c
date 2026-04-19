#include <stdio.h>

int main(void)
{
    char nome[50];
    char curso[50];
    int idade;

    printf("Digite o seu nome:\n");
    fgets(nome, 50, stdin);

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);
    getchar();

    printf("Digite o seu curso:\n");
    fgets(curso, 50, stdin);

    printf("\nNome: %sIdade: %d\nCurso: %s", nome, idade, curso);

}