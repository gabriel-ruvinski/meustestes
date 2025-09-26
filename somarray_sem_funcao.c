// Soma de valores em array, sem usar função
#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int soma1 = 0;
    int i;
    for(i=0; i<5; i++) soma1 += arr1[i];

    int arr2[] = {10, 20, 30};
    int soma2 = 0;
    for(i=0; i<3; i++) soma2 += arr2[i];

    printf("Soma 1: %d\nSoma 2: %d\n", soma1, soma2);

    return 0;
}