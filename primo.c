#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int N);

int main () {

    int num;

    scanf("%d", &num);

    if (ehPrimo(num)) {

        printf("S");
    }

    else {

        printf("N");

    }

}

bool ehPrimo(int N) {

    if (N<=1) {

        return false;

    }

    for (int i = 2; i*i<=N; i++) {

        if (N % i == 0) {

            return false;
        }
    }

    return true;
    
}