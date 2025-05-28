#include <stdio.h>

int main(){
    float Reais[5];
    int code;

    for(int i=0; i<5; i++){
        printf("Digite o Reais[%d]: ", i);
        scanf("%f", &Reais[i]);
    }

    scanf("%d", &code);

    if(code == 1){
        for(int i=0; i<5; i++){
            printf("%f, ", Reais[i]);
        }
    }
    else if(code == 2){
        for(int i=4; i>-1;i--){
            printf("%f, ", Reais[i]);
        }
    }
    else
        printf("Codigo Invalido");

    return 0;
}
