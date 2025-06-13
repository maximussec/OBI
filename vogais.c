#include <stdio.h>
#include <stdbool.h>
#include <string.h>  
#include <ctype.h>   


bool ehVogal(char c);

int main () {

    char algo[101]; 
    char vogais[101];
    char consoantes[101];
    int vog = 0, conso = 0; 

    fgets(algo, 101, stdin);

    // remove o '\n' do final da string
    algo[strcspn(algo, "\n")] = '\0';


    for (int i = 0; algo[i] != '\0'; i++) {

        // processa apenas se for uma letra do alfabeto 
        if (isalpha(algo[i])) {
            if (ehVogal(algo[i])) {
                vogais[vog] = algo[i];
                vog++;
            } else {
                consoantes[conso] = algo[i];
                conso++;
            }
        }
    }

    vogais[vog] = '\0';
    consoantes[conso] = '\0';

    printf("Vogais: %s\n", vogais);
    printf("Consoantes: %s\n", consoantes);

    return 0;

}


bool ehVogal(char c) {

    char caractere = tolower(c);

    return (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u');
}