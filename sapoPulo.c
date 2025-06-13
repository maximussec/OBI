#include <stdio.h>

int main () {

    int N, M;
    int posicao, pulo;

    scanf("%d",&N);

    scanf("%d",&M);

    int pedras[100] = {0};

    for (int i = 0; i < M; i++) {

        scanf("%i",&posicao);

        pedras[posicao - 1] = 1;

        scanf("%d",&pulo);

        if ((posicao + pulo - 1) < N) {

        pedras[posicao+pulo - 1] = 1;
        
        }


        if (posicao - pulo - 1 >= 0) {

        pedras[posicao - pulo - 1] = 1;

        }

        
    }


            for (int i = 0; i < N; i++) {

            printf("%d\n",pedras[i]);
        }


    return 0;


}