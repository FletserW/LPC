#include <stdio.h>

int main()
{
    // variables:
    float media;
    int id, cont, l;

    // commands:
    printf("Informe o numero de pessoas a ser registrada: ");
    scanf("%d", &l);
    while (l <= 0)
    {
        printf("[ERRO] Valor invalido!\nInforme o numero de pessoas a ser registrada: ");
        scanf("%d", &l);
    }
    for (cont = 1; cont <= l; cont++)
    {
        printf("Informe a idade da pessoa %d: ", cont);
        scanf("%d", &id);
        while (id <= 0)
        {
            printf("[ERRO] Valor invalido!\nInforme a idade da pessoas %d: ", cont);
            scanf("%d", &id);
        }
        media += id;
    }
    media = media / l;
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("A media das idades fornecida: %.2f", media);
}
