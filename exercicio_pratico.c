/*
Exercicio pratico 1
Crie um programa com funções para:
-> Calcular a area do circulo;
-> Calcular a area de um retangulo;
-> Exibir um menu de informações
*/

#include <stdio.h>
#define PI 3.14159

float circulo(float raio) {
    return PI * raio * raio;
}

int retangulo(int base, int altura) {
    return base*2 + altura*2;
}

void exibir_resultados(float cir, int ret) {
    printf("Area do circulo: %.2f\n", cir);
    printf("Perimetro retangulo: %d\n", ret);
}

int main() {
    float raio = 5.5;
    int ladoret[] = {7, 15};

    exibir_resultados(circulo(raio), retangulo(ladoret[0], ladoret[1]));

    return 0;
}