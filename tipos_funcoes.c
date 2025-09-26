// Tipos de funções
#include <stdio.h>

// 1. Função sem parâmetros e sem retorno
void cumprimentar() {
    printf("Ola! Seja bem-vindo ao curso de culinaria!\n");
}

// 2. Função com parâmetros e sem retorno
void exibir_dados(char nome[], int idade) {
    printf("Nome %s\nIdade: %d anos\n", nome, idade);
}

// 3. Função sem parâmetros e com retorno
int obter_numero_aleatorio() {
    return 42;
}

// 4.Função com parâmetros e com retorno
float calcular_media(float nota1, float nota2) {
    return (nota1 + nota2) / 2;
}

int main() {
    int idade = 18;

    cumprimentar();
    exibir_dados("Joao", idade);
    printf("Numero aleatorio: %d\n", obter_numero_aleatorio());
    printf("Media %.2f\n", calcular_media(7.0, 8.5));

    return 0;
}