#include <stdio.h>

int main(){
    int vetor[10], x, y;

    scanf("%d", &x);

    for(int i=0; i<10; i++){
        printf("Digite Vetor[%d]", i);
        scanf("%d", &vetor[i]);
    }

    printf("Os vetores multiplos de %d: ", x);
    
    for(int i=0; i<10; i++){
        y = vetor[i] % x;
        if(y == 0)
            printf("vetor[%d]: (%d) ", i, vetor[i]);
    }

    return 0;    
}