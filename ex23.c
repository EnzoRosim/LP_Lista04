#include <stdio.h>

int main() {
    float A[5], B[5];
    float produto = 0;

//preenche A
    for(int i=0; i<5; i++){
        printf("Digite seu A[%d]: ", i);
        scanf("%d", &A[i]);
    }

//preenche B
    for(int i=0; i<5; i++){
        printf("Digite seu B[%d]: ", i);
        scanf("%d", &B[i]);
    }

//calcula o produto escalar
    for(int i=0; i<5; i++){
        produto = produto + (A[i] * B[i]);
    }

    for(int i=0; i<5; i++){
        printf("O vetor A: %d, O Vetor B: %d\n", A[i], B[i]);
    }
    printf("O produto escalar eh: %d", produto);

    return 0;
}