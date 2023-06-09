#include<stdio.h>

int main()
{
    //Variables:
    float nota,media;
    int i = 1;
    //Commands:
    printf("Informe as notas do aluno:\n");
    while(i<5){
        printf("Nota %d: ",i);
        scanf("%f",&nota);
        media += nota; 
        i++;
    }
    media = media/4;
    printf("=--=-=-=-=-=-=-=-=-=\n");
    printf("\nMedia: %.2f",media);
}
