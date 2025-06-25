#include <stdio.h>

int main () {

    int matriz[3][3];
    int somads = 0, somadp = 0;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

        scanf("%d",&matriz[i][j]);

        if(i == j) {

            somadp += matriz[i][j];
        }

        if (i + j == 2) {

            somads += matriz[i][j];
        }

        }
    }

    printf("%d %d",somadp, somads);

    return 0;
}