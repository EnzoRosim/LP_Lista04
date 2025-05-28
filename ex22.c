#include <stdio.h>

int main() {
    int A[10], B[10], C[10];

//preenche A
    for(int i=0; i<10; i++){
        printf("Digite seu A[%d]: ", i);
        scanf("%d", &A[i]);
    }

//preenche B
    for(int i=0; i<10; i++){
        printf("Digite seu B[%d]: ", i);
        scanf("%d", &B[i]);
    }

//calculando o C com base nos outros vetores
    for(int i=0; i<10; i++){
        if(i % 2 == 0)
            C[i] = A[i];
        else
            C[i] = B[i];
    }

    return 0;
}