#include <stdio.h>

int main()
{

    // Variables:
    int num[3][3], i, j, cont = 1;

    // Commads:
    printf("Digite 9 valores: \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("Valor %d: ", cont);
            scanf("%d", &num[i][j]);
            cont++;
        }
    }
    printf("=-=-=-=-=-=-=-=-=-=\n");
    printf("Volor Original:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("| %d ", num[i][j]);
            if (j == 2)
                printf("\n");
        }
    }
    printf("=-=-=-=-=-=-=-=-=-=\n");
    printf("Vezes 5:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("| %d ", num[i][j]*5);
            if (j == 2)
                printf("\n");
        }
    }
}