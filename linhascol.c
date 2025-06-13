#include <stdio.h>

int main () {

    int N;

    scanf("%d",&N);

    int MA[N][N];
    int somaCol[N];
    int somaLin[N];

    int somaMax = 0;

    for (int i = 0; i<N; i++) {

        for (int j = 0; j < N; j++) {


            scanf("%d",&MA[i][j]);


        }
        
       }

            for (int i = 0; i<N; i++) {

            somaLin[i] = 0;

        for (int j = 0; j < N; j++) {

            somaLin[i] += MA[i][j];

            
            }


                if (somaLin[i] > somaMax) {

                somaMax = somaLin[i];
                
           }
       }

        for (int j = 0; j < N; j++) {

                            somaCol[j] = 0;

            for (int i = 0; i < N; i++) {

                somaCol[j] += MA[i][j];
            }

            if (somaCol[j] > somaMax) {

                somaMax = somaCol[j];

            }


        }

        

    printf("%d",somaMax);

    return 0;
    
  }