#include <stdio.h>

int main()
{

    // Variables:
    float n[4], maior, menor = 11;
    int cont;

    // Commands:
    printf("Informe a nota dos alunos:\n");
    for (cont = 0; cont < 4; cont++)
    {
        printf("Nota do aluno %d: ", cont + 1);
        scanf("%f", &n[cont]);
        while (n[cont] < 1 || n[cont] > 10)
        {
            printf("[ERRO] valor invalido!!");
            printf("Informe a nota do aluno %d: ", cont + 1);
            scanf("%f", &n[cont]);
        }
        if (n[cont] > maior)
            maior = n[cont];
        if (n[cont] < menor)
            menor = n[cont];
    }
    printf("\n======= DADOS =======\n");
    printf("Ordem Atual: ");
    for (cont = 0; cont < 4; cont++)
    {
        printf(" %.2f |", n[cont]);
    }
    printf("\nOrdem Inversa: ");
    for (cont = 3; cont >= 0; cont--)
    {
        printf(" %.2f |", n[cont]);
    }
    printf("\nMaior nota: %.2f", maior);
    printf("\nMenor nota: %.2f", menor);
}
