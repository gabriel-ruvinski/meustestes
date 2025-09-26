// Funções
#include <stdio.h>
#include <string.h>

// Uso de operadores em função

int calcular_expressao(int a, int b, char operador) {
    switch(operador) {
       case '+': return a + b;
       case '-': return a - b;
       case '*': return a * b;
       case '/': return (b != 0) ? a / b : 0;
       case '%': return (b != 0) ? a % b : 0;
       default: return 0;
    }
}

// Ponteirros em função

void incrementar_valor(int *valor) {
    (*valor)++;
}

int main() {
    int x = 10, y = 3;
    printf("Operacoes: %d + %d = %d\n", x, y, calcular_expressao(x, y, '+'));
    printf("Operacoes: %d - %d = %d\n", x, y, calcular_expressao(x, y, '-'));
    printf("Operacoes: %d * %d = %d\n", x, y, calcular_expressao(x, y, '*'));
    printf("Operacoes: %d / %d = %d\n", x, y, calcular_expressao(x, y, '/'));
    printf("Operacoes: %d %% %d = %d\n", x, y, calcular_expressao(x, y, '%'));
    
    printf("\nAntes do incremento: %d\n", x);
    incrementar_valor(&x);
    printf("Depois do incremento: %d\n", x);

    return 0;
}