#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC = %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc <= 24.99) {
        printf("Peso normal\n");
    } else if (imc <= 29.99) {
        printf("Sobrepeso\n");
    } else if (imc <= 34.99) {
        printf("Obesidade Grau I\n");
    } else if (imc <= 39.99) {
        printf("Obesidade Grau II\n");
    } else {
        printf("Obesidade Grau III\n");
    }

    return 0;
}
