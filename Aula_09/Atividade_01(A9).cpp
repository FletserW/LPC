#include <stdio.h>

int main()
{

    // Variables:
    float n, media, soma, maior, menor = 11;
    int cont;

    // Commands:
    printf("Informe a nota dos alunos:\n");
    for (cont = 1; cont <= 10; cont++)
    {
        printf("Nota do aluno %d: ", cont);
        scanf("%f", &n);
        while (n < 1 || n > 10)
        {
            printf("[ERRO] valor invalido!!");
            printf("Informe a nota do aluno %d: ", cont);
            scanf("%f", &n);
        }
        if (n > maior)
            maior = n;
        if (n < menor)
            menor = n;
        soma += n;
    }
    media = soma / 10;
    printf("\n======= DADOS =======");
    printf("\nA soma das notas: %.2f", soma);
    printf("\nMaior nota: %.2f", maior);
    printf("\nMenor nota: %.2f", menor);
    printf("\nA media: %.2f", media);
}
