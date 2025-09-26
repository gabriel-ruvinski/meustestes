// Soma de valores em array, usando funcao
#include <stdio.h>

int somar_array(int *arr, int tam) {
    int soma = 0;
    int i;
    for(i=0; i<tam; i++) {
        soma += arr[i];
    }
    return soma;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30};

    printf("Soma 1: %d\n", somar_array(arr1, 5));
    printf("Soma 2: %d\n", somar_array(arr2, 3));

    return 0;
}