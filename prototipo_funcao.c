// Protótipo e implementação de função
#include <stdio.h>

// Protótipos (declarações)
int somar(int a, int b);
float dividir(float dividendo, float divisor);
void exibir_resultados(int resultado);

// Implementações (definições)
int somar(int a, int b) {
    return a + b;
}

float dividir(float dividendo, float divisor) {
    if (divisor != 0) {
        return dividendo / divisor;
    }
    return 0;
}

void exibir_resultados(int resultado) {
    printf("O resultado e: %d\n", resultado);
}

///////////////////////////////////////////////////////////

int main() {
    int x = 4, y = 5;
    int soma = somar(x, y);
    exibir_resultados(soma);

    float divisao = dividir(10.0, 3.0);
    printf("Divisao: %.2f\n", divisao);

    return 0;
}