#include <stdio.h>
#include <stdbool.h>

bool ehBranca(int L, int C);

int main () {

    int Lin, Col;

    scanf("%i %i", &Lin, &Col);

    if (ehBranca(Lin, Col)) {

        printf("1");
    }

    else {

        printf("0");
    }

    return 0;
}

bool ehBranca(int L, int C) {

     if ( (L+C) % 2 == 0) {

        return true;
     }

     return false;
}