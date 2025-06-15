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

    int quadrados[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &quadrados[i]);
    }

    int distancia[N];
    int infinito = N + 1; 
    int distancia_atual;

    distancia_atual = infinito;

    for (int i = 0; i < N; i++) {

        if (quadrados[i] == 0) {
            
            distancia_atual = 0;

        } else {

            distancia_atual++;
        }

        distancia[i] = distancia_atual;
    }


    distancia_atual = infinito; 
    for (int i = N - 1; i >= 0; i--) {

        if (quadrados[i] == 0) {
            distancia_atual = 0;

        } else {

            distancia_atual++;
        }

        distancia[i] = min(distancia[i], distancia_atual);

    }


    for (int i = 0; i < N; i++) {

        if (distancia[i] > 9) {

            printf("9 ");

        } 

        else {

            printf("%d ", distancia[i]);
        }
    }

    printf("\n");

    return 0;
}