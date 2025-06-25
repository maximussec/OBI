#include <stdio.h>
#include <ctype.h>

int main () {

    int N;

    scanf("%d",&N);

    int numero[N];
    char bota[N];
    char botaU[N];
    int par = 0;

    for (int i = 0; i < N; i++) {

        scanf("%d %c",&numero[i],&bota[i]);
        
        botaU[i] = toupper(bota[i]);
            

        if (botaU[i] != 'D' && botaU[i] != 'E') {

        return 0;

        }

    }

    for (int i = 0; i < N; i++) {

        if (bota[i] == -1) {

            continue;

        }

        for (int j = i + 1; j < N; j++) {

            if (bota[i] == -1) {

                continue;

            }

        if (botaU[i] != botaU[j] && numero[i] == numero[j] ) {

            par++;
            bota[i] = -1;
            bota[j] = -1;


        }

        }
    }

    printf("%d",par);

    return 0;


}