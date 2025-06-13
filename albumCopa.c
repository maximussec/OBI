#include <stdio.h>

int main () {

    int N, M;

    scanf("%d",&N);
    scanf("%d",&M);

    int fig[N+1], num, falta = 0;

    for (int i = 1; i<N+1; i++) {

        fig[i] = 0;

    }

    for (int i = 0; i<M; i++) {

        scanf("%d", &num);

        fig[num] = num;

    }

    for (int i = 1; i<N+1; i++) {

        if (fig[i] == 0) {

            falta++;
        }
    }

    printf("%d", falta);

    return 0;

}