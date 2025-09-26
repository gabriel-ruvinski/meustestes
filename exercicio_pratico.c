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

void exibir_menu() {
    printf("=== MENU ===\n");
    printf("1. Area do circulo\n");
    printf("2. Perimetro do retangulo\n");
    printf("0. Sair\n");
    printf("Opcao: ");
}

int main() {
    float raio;
    int opcao;
    int ladoret[2];

    do {
        exibir_menu();
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite o raio do circulo: ");
                scanf("%f", &raio);
                printf("Area do circulo: %.2f\n\n", circulo(raio));
                break;

            case 2:
                printf("Digite a largura: ");
                scanf("%d", &ladoret[0]);
                printf("Digite a altura: ");
                scanf("%d", &ladoret[1]);
                printf("Perimetro do retangulo: %d\n\n", retangulo(ladoret[1], ladoret[0]));
                break;

            case 0:
                printf("Saindo...");
                break;
        }
    } while (opcao != 0);

    return 0;
}
