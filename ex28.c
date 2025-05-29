#include <stdio.h>

int main() {
    int v[10], v1[10], v2[10];
    int cont_v1 = 0, cont_v2 = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite v[%d]: ", i);
        scanf("%d", &v[i]);

        if (v[i] % 2 != 0) {
            v1[cont_v1] = v[i];
            cont_v1++;
        } 
        else {
            v2[cont_v2] = v[i];
            cont_v2++;
        }
    }

    printf("\nValores ímpares (v1):\n");
    for (int i = 0; i < cont_v1; i++) {
        printf("%d ", v1[i]);
    }

    printf("\n\nValores pares (v2):\n");
    for (int i = 0; i < cont_v2; i++) {
        printf("%d ", v2[i]);
    }

    printf("\n");
    return 0;
}
