#include <stdio.h>


int main () {
int N; 

scanf("%i", &N);

int matriz[3][3];
int somacolunas[9] = {0};


for (int i = 0; i < N; i++) {

    for (int j = 0; j < N; j++) {

        scanf("%d",&matriz[i][j]);


    }
}

for (int j = 0; j < N; j++) {

    for (int i = 0; i < N; i++) {

        somacolunas[j]+= matriz[i][j];
        
    }
    printf("Soma da coluna %d: %d ",j,somacolunas[j]);

}



return 0;

}