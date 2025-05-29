#include <stdio.h>

int main(){
    int A[10];
    int cont;

//preenche A
    for(int i=0; i<10; i++){
        printf("Digite A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for(int i=0; i<10; i++){
        cont = 0;
        if (A[i] <= 1) {
            printf("Nao eh primo\n");
            continue;
        }

        for (int j = 1; j <= A[i]; j++) {
            if (A[i] % j == 0)
                cont++;
        }

        if (cont == 2)
            printf("Numero primo\n");
        else
            printf("Nao eh primo\n");
        }
    return 0;
}