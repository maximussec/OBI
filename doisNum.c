#include <stdio.h>

int main () {

    int num1, num2, i; 

    scanf("%i %i", &num1, &num2);

    for (int i = num1; i<=num2; i++) {

        printf("%i ", i);
    }
}