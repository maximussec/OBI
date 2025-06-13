#include <stdio.h>

int main () {

    int lancamentos;

    scanf("%d",&lancamentos);

    int dado, repetiumax = 0; 
    int repetiu[13] = {0}; 

    for (int i = 1; i <= lancamentos; i++) {

        scanf("%d", &dado);

        repetiu[dado]++;

    }

        for (int i = 1; i <= 12; i++) {

            if (repetiu[i] > repetiumax){

                repetiumax = repetiu[i];

            }
        }

            for (int i = 1; i <= 12; i++) {

                if (repetiu[i] == repetiumax) {

                    printf("%d ",i);

                }
            }

            return 0;

}