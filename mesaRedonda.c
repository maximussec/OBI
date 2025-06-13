#include <stdio.h>

int main () {

    int sortA, sortB;
    int posicao[3] = {0};

    int posicaoAtual = 0, posicaoA, posicaoB, posicaoC;

    scanf("%d",&sortA);
    scanf("%d",&sortB);


    for (int i = 0; i < sortA; i++) {

        posicaoAtual = (posicaoAtual + 1) % 3;

    }

    posicao[posicaoAtual]++;

    posicaoA = posicaoAtual;

    posicaoAtual = 0;

    for (int i = 0; i < sortB; i++) {

        posicaoAtual = (posicaoAtual + 1) % 3;

    }

    if (posicao[posicaoAtual] == 0) {

        posicao[posicaoAtual]++;

    }

    else {

        posicaoAtual = (posicaoAtual + 1) % 3;
        
        posicao[posicaoAtual]++;
    }

    posicaoB = posicaoAtual;

    for (int i = 0; i < 3; i++) {

        if (posicao[i] == 0) {

            posicaoC = i % 3;
            
        }
    }

    printf("%d",posicaoC);

    return 0;

}