#include <stdio.h>

int main () {

int N, N1, N2, seqa = 0, seqm = 0;

    scanf("%d", &N);

    scanf("%d", &N1);

    for (int i = 0; i < N - 1; i++) {

        scanf("%d", &N2);

        if (N1 == N2) {

            seqa++;
        }

        else if (N1 != N2) {

            seqa = 0;
        }

        if (seqa > seqm) {

            seqm = seqa;
        }

        N1 = N2;
    }

    printf("%d", seqm + 1);

return 0;

}

