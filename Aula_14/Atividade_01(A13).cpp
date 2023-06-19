#include <stdio.h>

//======= Area de prototicos ======= //
int verificar(int x, int y);

//======= Função Principal ======= //
int main(){
//Variables:
int x,y,r = 0;
//Commands:
printf("Informe 2 valores inteiros:\n");
printf("Valor 1: ");
scanf("%d",&x);
printf ("Valor 2: ");
scanf("%d",&y);
r = verificar(x,y);
printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
printf("O menor valor entre eles: %d",r);
}

//======= Corpo das Funções ======= //
int verificar(int x, int y){
    if(x < y)
        return(x);
    else
        return(y);
}