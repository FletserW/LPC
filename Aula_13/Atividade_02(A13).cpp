#include <stdio.h>

int main()
{

    // Variables:
    int mat[3][3], vet[3], i, j, k, cont = 1;

    // Commads:

    //=-=-=-=-=-=-= Entrada de dados =-=-=-=-=-=-=-=
    printf("Digite 9 valores: \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("Valor %d: ", cont);
            scanf("%d", &mat[i][j]);
            cont++;
        }
    }
    printf("Agora mais 3 valores:\n");
    cont = 0;
    for (i = 0; i <= 2; i++)
    {
        printf("Valor %d: ", cont + 1);
        scanf("%d", &vet[i]);
        cont++;
    }
    //=-=-=-=-=-=-=-= Saida de Dados Originais =-=-=-=-=-=-=-=-=
    printf("=-=-=-=-=-=-=-=-=-=\n");
    printf("Valor Original(Matriz):\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("| %d ", mat[i][j]);
            if (j == 2)
                printf("\n");
        }
    }
    printf("=-=-=-=-=-=-=-=-=-=\n");
    printf("Valor Original(Vetor):\n");
    for (i = 0; i <= 2; i++)
    {
        printf("| %d ", vet[i]);
    }
    printf("\n=-=-=-=-=-=-=-=-=-=\n");
    //=-=-=-=-=-=-=-= Saida de Dados  =-=-=-=-=-=-=-=-=
    printf("Valores manipulados:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("| %d x %d = %d |\n", vet[i], mat[i][j], vet[i] * mat[i][j]);
            if (j == 2)
            {
                printf("\n");
            }
        }
    }
    printf("=-=-=-=-=-=-=-=-=-=\n");
}