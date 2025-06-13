#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);


    if (N <= 0) {
        return 0; 
    }

    int tab[N];
    int minas; 

    for (int i = 0; i < N; i++) {
        scanf("%d", &tab[i]);

       
        if (tab[i] != 0 && tab[i] != 1) {
    
            return 0;
        }
    }

    for (int i = 0; i < N; i++) {
        // Zera o contador para cada nova célula a ser analisada.
        minas = 0;

        // 1. Conta a mina na própria posição.
        if (tab[i] == 1) {
            minas++;
        }

        // 2. Conta a mina na esquerda, SE não for a primeira célula (i > 0).
        if (i > 0 && tab[i - 1] == 1) {
            minas++;
        }

        // 3. Conta a mina na direita, SE não for a última célula (i < N - 1).
        if (i < N - 1 && tab[i + 1] == 1) {
            minas++;
        }


        printf("%d\n", minas);
    }

    return 0;
}