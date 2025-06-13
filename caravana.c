#include <stdio.h>

int main () {

    int N;

    scanf("%d",&N);

    int camelos[N];
    int peso = 0, media, resposta[N];


    for (int i = 0; i < N; i++) {

        scanf("%d",&camelos[i]);

        peso += camelos[i];

    }

    media = (peso/N);

    for (int i = 0; i < N; i++) {

        resposta[i] = (media - camelos[i]);

        printf("%d\n",resposta[i]);

    }

    return 0;

}