#include <stdio.h>

int main(){
    int Vet[10];

    for(int i=0; i<10; i++){
        printf("Vet[%d]", i);
        scanf("%d", &Vet[i]);

        if(Vet[i] < 0){
            Vet[i] = 0;
        }
    }

    for(int i=0; i<10; i++)
        printf("%d, ", Vet[i]);

    return 0;
}