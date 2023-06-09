#include <stdio.h>
#define TAM_MAX 12

int main()
{

    // Variables:
    int num[TAM_MAX], vetpar[TAM_MAX], vetimpar[TAM_MAX], cont, a=0, b=0;

    // Commands:
    printf("Digite 12 valores:\n");
    for (cont = 0; cont <= 11; cont++)
    {
        printf("Valor %d: ", cont + 1);
        scanf("%d", &num[cont]);
        if (num[cont] % 2 == 0)
        {
            vetpar[a] = num[cont];
            a++;
        }
        else
        {
            vetimpar[b] = num[cont];
            b++;
        }
    }
    printf("\n======= DADOS =======\n");
    printf("Ordem Atual: ");
    for (cont = 0; cont <= 11; cont++)
    {
        printf(" %d |", num[cont]);
    }

    printf("\nOrdem Inversa: ");
    for (cont = 11; cont >= 0; cont--)
    {
        printf(" %d |", num[cont]);
    }

    printf("\nNumeros pares: ");
    for (cont = 0; cont < a; cont++)
    {
        printf(" %d |", vetpar[cont]);
    }

    printf("\nNumeros impares: ");
    for (cont = 0; cont < b; cont++)
    {
        printf(" %d |", vetimpar[cont]);
    }
}