#include<stdio.h>

int main()
{
    //Variables:
    int cont = 1, id, idmenor, idmaior;
    float alt, altmenor, altmaior;
    char op;
    
    //Commands:
do
    {
        printf("Informe o id do %d° aluno: ", cont);
        scanf("%d", &id);
        printf("Informe a altura em cm: ");
        scanf("%f", &alt);
        if(cont==1){
            altmenor = alt;
            idmenor = id;
        }
        if (alt > altmaior)
        {
            altmaior = alt;
            idmaior = id;
        }
        if (alt < altmenor)
        {
            altmenor = alt;
            idmenor = id;
        }
        do{
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("Deseja continuar (S ou N): ");
            scanf(" %c", &op);
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            if (op == 's' || op == 'S') {
                cont++;
            } else if (op == 'n' || op == 'N') {
                break;
            } else {
                printf("Opção inválida.\n");
            }
       }while((op != 'S' )&&(op != 's'));
    } while ((op != 'N' )&&(op != 'n'));

    printf("O aluno mais alto tem id %d e altura %.2f.\n", idmaior, altmaior);
    printf("O aluno mais baixo tem id %d e altura %.2f.\n", idmenor, altmenor);

}
