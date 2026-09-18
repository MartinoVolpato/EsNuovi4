#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int i = 0;
    int sum = 0;
    int x;
    printf("Quanti interi vuoi inserire: \n");
    scanf("%d", &i);
    int *p = malloc(sizeof(int) * i);
    for (int j = 0; j < i; j++) {
        printf("Inserisci numero: ");
        scanf("%d", &x);
        sum += x;
    }
    printf("Somma: %d", sum);
    free(p);
    p = NULL;
    return 0;
}