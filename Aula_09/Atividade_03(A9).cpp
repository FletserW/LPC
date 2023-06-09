#include <stdio.h>

int main()
{

    // Variables:
    int cont, i;

    // Commands:
    for (cont = 2; cont <= 100; cont += 2)
    {
        for (i = 1; i <= 5; i++)
        {
            if (cont <= 100)
            {
                if (cont < 10)
                {
                    printf("0%d | ", cont);
                }
                else
                {
                    printf("%d | ", cont);
                }
                cont += 2;
            }
        }
        printf("\n");
    }
}
