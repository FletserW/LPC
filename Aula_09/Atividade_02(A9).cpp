#include <stdio.h>

int main() {

    // Variables:
    int cont, i;

    // Commands:
    for (cont = 1; cont <= 50; cont++) {
        for (i = 1; i <= 5; i++) {
            if (cont < 10) {
                printf("0%d | ", cont);
            } else {
                printf("%d | ", cont);
            }
            cont++;
        }
        cont--;
        printf("\n");
    }
}
