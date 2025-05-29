#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int A[6];
    int somaP=0, contI=0;

    srand(time(NULL));
    for(int i=0;i<6;i++){
        A[i] = rand();
    }

    for(int i=0;i<6;i++){
        if(A[i] % 2 == 0){
            printf("A[%d]: %d, e par \n", i, A[i]);
            somaP = somaP + A[i];
        }
        else{
            printf("A[%d]: %d e impar \n", i, A[i]);
            contI++;
        }
    }
    printf("A quantidade de numeros impares foi: %d\n", contI);
    printf("A soma dos numeros pares eh: %d", somaP);


    return 0;
}