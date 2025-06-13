#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int main (){

    int contVogal = 0, contConsoante = 0;
    char pala[MAX], palavraVogal[MAX], palavraConsoante[MAX];

    fgets(pala, 99, stdin);

    pala[strcspn(pala, "\n")] = '\0';



    for (int i = 0; pala[i] != '\0'; i++) {

        if (isalpha(pala[i])) {

            char palavra = tolower(pala[i]);



        if (palavra == 'a' || palavra == 'e' || palavra == 'i' || palavra == 'o'  || palavra == 'u') {

            palavraVogal[contVogal++] = pala[i];

        }

        else {

            palavraConsoante[contConsoante++] = pala[i];
        }

        }

        else {

            continue;

        }



    }

        palavraConsoante[contConsoante] = '\0';
        palavraVogal[contVogal] = '\0';

    printf("Vogais: %s\nConsoantes: %s",palavraVogal, palavraConsoante);

    return 0;


}