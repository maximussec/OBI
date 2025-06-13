#include <stdio.h>

int main () {

    int N;

    scanf("%d",&N);

    int X[N];

    int resp = 0, num[N], ordem = 0;


    for (int i = 0; i < N; i++) {

        scanf("%d",&X[i]);

        if (X[i]!=0) {

            num[ordem++] = X[i];
        }

        else {

            ordem--;
        }

    }

    for (int i = 0; i < ordem; i++) {

        resp += num[i];
    }


    printf("%d",resp);

    return 0;

}