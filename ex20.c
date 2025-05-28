#include <stdio.h>

int main() {
    int vetor[10];
    int impar[10];
    int i, n, count = 0;


    for (i = 0; i < 10; ) {
        printf("Digite o %dº número (entre 0 e 50): ", i + 1);
        scanf("%d", &n);

        if (n >= 0 && n <= 50) {
            vetor[i] = n;
            i++;
        } else {
            printf("Número fora do intervalo. Tente novamente.\n");
        }
    }


    int j = 0;
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            impar[j] = vetor[i];
            j++;
        }
    }


    printf("\nVetor 1:\n");
    for (i = 0; i < 10; i++) {
        printf("%3d", vetor[i]);
        if ((i + 1) % 2 == 0)
            printf("\n");
    }


    printf("\nímpares:\n");
    for (i = 0; i < j; i++) {
        printf("%3d", impar[i]);
        if ((i + 1) % 2 == 0)
            printf("\n");
    }

    return 0;
}