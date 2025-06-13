#include <stdio.h>

int main () {

    int par[9], impar[9], num[10], ipar = 0, iimpar = 0;


    for (int i=0; i<10; i++) {

        scanf("%d",&num[i]);

        if (num[i] % 2 == 0) {

            par[ipar++] = num[i];

        }

        else {

            impar[iimpar++] = num[i];

        }

    }


    for (int i = 0; i<ipar; i++) {

        printf("%d ",par[i]);

    }

    printf("\n");

        for (int i = 0; i<iimpar; i++) {

        printf("%d ",impar[i]);

    }

    return 0;

}