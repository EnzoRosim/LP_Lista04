#include <stdio.h>

int main() {
    int A[10], B[10], C[10];

    for(int i=0; i<10; i++){
        printf("Escreva o A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    
    for(int j=0; j<10; j++){
        printf("Escreva o B[%d]: ", j);
        scanf("%d", &B[j]);
    }

    printf("O seu vetor C eh: ");
    for(int k=0; k<10; k++){
        C[k] = A[k] - B[k];
        printf("C[%d]: %d\n", k, C[k]);
    }
    return 0;
}