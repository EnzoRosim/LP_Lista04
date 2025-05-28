#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float d, D, m, s=0, soma=0, p;
    scanf("%d", &n);
    int v[n];


//PREENCHE O ARRAY
    for(int i=0; i<n; i++){
        scanf("%d", &v[i]);
        s = s + v[i];
    }
    
//media
    m = (float)s / n;


//SOMA
    for(int i=0; i<n; i++){
        p = (v[i] - m) * (v[i] - m);
        soma = soma + p;
    }    

//multiplicacao da soma
    d = (1.0 / (n - 1)) * soma;
    

//raiz disso
    D = sqrt(d);
   
    printf("O desvio padrao eh: %f", D);
    
    return 0;
}