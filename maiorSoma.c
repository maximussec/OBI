#include <stdio.h>

int main () {

    int N;

    scanf("%d",&N);

    int A[N];

    int maior, marc = 0, somaAntes= 0, somaDepois = 0;

    for (int i = 0; i < N; i++) {

        scanf("%d",&A[i]);

        if (i == 0) {

            maior = A[i];
        }

        else if (A[i] > maior) {

            maior = A[i];

        }

    } 

    for (int i = 0; i < N; i++) {

        if (A[i] != maior) {

            marc++;
        }

        else {

            break;
        }

    }

    for (int i = 0; i < marc; i++) {

        somaAntes += A[i];
    }

    for (int i = marc + 1; i < N; i++) {

        somaDepois+= A[i];

    }

    printf("%d\n%d\n",somaAntes, somaDepois);

    return 0;
}