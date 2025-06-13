#include <stdio.h>

int main () {

    int N, i;
    unsigned long long res = 1;

    scanf("%d", &N);

    for (i=1; i<=N; i++) {

        res = res * i;

    }

    printf("%llu", res);

    return 0;
}