#include <stdio.h>

int main () {

    int maior, num;

    scanf("%d",&num);

    maior = num;

    if (num == 0) {

        return 0;
    }

    for (;;) {

        scanf("%d",&num);

        

        if (num == 0) {
            
            break;
        }

        else {

        if (num > maior) {

            maior = num;
        }

         }

    }

    printf("%d",maior);

    return 0;
}