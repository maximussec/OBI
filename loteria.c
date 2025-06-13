#include <stdio.h>

int main () {

    int sorteio[6], sorteado[6], acertos = 0;

    for (int i = 0; i<6; i++) {

        scanf("%d",&sorteio[i]);
    }

    for (int i = 0; i < 6; i++) {

        scanf("%d",&sorteado[i]);
    }


    for (int i = 0; i < 6; i++) {;

        for(int j = 0; j < 6; j++) {

            if (sorteio[i] == sorteado[j]) {

                acertos++;
                break;
            }
        }
    }


    if (acertos == 3) {

        printf("terno");
    }

    else if (acertos == 4){

        printf("quadra");

    }

    else if (acertos == 5) {

        printf("quina");
    }

    else if (acertos == 6) {

        printf("sena");
    }

    else if (acertos < 3) {

        printf("azar");
    }

    return 0;
}