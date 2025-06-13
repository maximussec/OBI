#include <stdio.h>

int main () {

    int N, cont = 0;

    for (;;) {

        scanf("%d", &N);

        if (N != 2018) {

            cont++;
        }

        else {

            break;
        }
    }

    printf("%d",cont);

    return 0;
}