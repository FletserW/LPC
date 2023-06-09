#include <stdio.h>

int main()
{
    // Variables:
    int cont, id, maior, menor;

    // Commads:
    printf("INforme a idade de 3 pessoas.\n");
    for (cont = 1; cont <= 3; cont++)
    {
        printf("Pessoa %d: \n", cont);
        scanf("%d", &id);
        while (id <= 0)
        {
            printf("[ERRO] Valor invalido\nInforme a idade de pessoa %d: ", cont);
            scanf("%d", &id);
        }

        if (cont == 1)
        {
            maior = id;
            menor = id;
        }
        if (id > maior)
        {
            maior = id;
        }
        else if (id < menor)
        {
            menor = id;
        }
    }
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Maior idade: %d", maior);
    printf("\nMenor idade: %d", menor);
}