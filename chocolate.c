#include <stdio.h>

int main () {

    int cortes, pedacos, resto = 0;

    scanf("%d",&cortes);

    for(int i = 0; i < cortes; i++) {

        scanf("%d",&pedacos);
        
        resto += pedacos-1;

    }

    printf("%d",resto);

    return 0;
}