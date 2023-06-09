#include <stdio.h>
#define TAM_MAX 100

int main()
{
    // Variables:
    int tam, cont;
    float notas[TAM_MAX], media;

    // Commands:
    printf("Informe o numero de alunos(maximo 100): ");
    scanf("%d", &tam);
    while (tam <= 0 || tam > 100)
    {
        printf("[ERRO] Tamanho invalido!");
        printf("Informe o numero de alunos(maximo 100): ");
        scanf("%d", &tam);
    }
    for (cont = 1; cont <= tam; cont++)
    {
        printf("Informe a nota do aluno %d: ", cont);
        scanf("%f", &notas[cont]);
        while (notas[cont] < 0 || notas[cont] > 10)
        {
            printf("[ERRO] Nota invalida!");
            printf("Informe a nota do aluno %d: ", cont);
            scanf("%f", &notas[cont]);
        }
        media += notas[cont];
    }
    media = media / tam;
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Media: %.2f", media);
}
