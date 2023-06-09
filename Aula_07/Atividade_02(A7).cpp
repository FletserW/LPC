#include<stdio.h>

int main()
{
    //variables:
    float i,media;
    int cont=0;
    //Commands:
    while (i != -1) {
        printf("Digite um valor (ou -1 para sair): ");
        scanf("%f", &i);
        media += i;
        cont++;
    }
    media = (media+1) / (cont - 1);
    printf("=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Media: %.2f", media);
}