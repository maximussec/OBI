#include <stdio.h>

// É comum em C usar #define para constantes, especialmente para tamanhos de array.
#define MAX_TAMANHO 1000000

// O array global funciona da mesma forma em C.
// Variáveis globais em C também são inicializadas com 0 por padrão.
int v[MAX_TAMANHO];

int main() {
    int tamanho = 0, qtd_op;

    // Leitura da quantidade de operações usando scanf.
    scanf("%d", &qtd_op);

    // O laço para processar as operações.
    for (int i = 0; i < qtd_op; i++) {
        int tipo;
        scanf("%d", &tipo);

        if (tipo == 0) {
            // Operação para adicionar um elemento.
            int x;
            scanf("%d", &x);
            v[tamanho] = x;
            tamanho++;
        } else {
            // Operação para remover o último elemento.
            // Adicionada uma verificação de segurança para não deixar 'tamanho' ficar negativo.
            if (tamanho > 0) {
                tamanho--;
            }
        }
    }

    // Laço para imprimir o estado final do vetor.
    for (int i = 0; i < tamanho; i++) {
        // Impressão de cada elemento com printf.
        printf("%d ", v[i]);
    }
    
    // Imprime uma quebra de linha no final.
    printf("\n");
    
    return 0;
}