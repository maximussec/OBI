#include <stdio.h>

int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    if (N <= 0) return 0;

    int quadrados[N], distancia[N], atual = N*2;

    for (int i = 0; i < N; i++) {
        scanf("%d", &quadrados[i]);
    }

    for (int i = 0; i < N; i++) {

        if (quadrados[i] == 0) {
            atual = 0;
        }

        else {

            atual++;
        }

        distancia[i] = atual;


    }

    atual = N*2;


    for (int i = N - 1; i>=0; i--) {

        if (quadrados[i] == 0) {

            atual = 0;

        }

        else {

            atual++;

        }

        distancia[i] = min(distancia[i], atual);

    }
   
    for (int i = 0; i < N; i++) {

        if (distancia[i] >= 9) {

            printf("9 ");

        }

        else {

            printf("%d ",distancia[i]);
        }
    }

    return 0;
}