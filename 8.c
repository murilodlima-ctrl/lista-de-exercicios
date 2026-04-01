#include <stdio.h>

int main() {
    float valor, desconto = 0, total;
    int opcao;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    printf("Forma de pagamento:\n");
    printf("1 - PIX (3%% desconto)\n");
    printf("2 - Dinheiro (5%% desconto)\n");
    printf("3 - Cartao (sem desconto)\n");

    scanf("%d", &opcao);

    if (opcao == 1) {
        desconto = valor * 0.03;
    } else if (opcao == 2) {
        desconto = valor * 0.05;
    } else if (opcao == 3) {
        desconto = 0;
    } else {
        printf("Opcao invalida\n");
        return 0;
    }

    total = valor - desconto;

    printf("Desconto: %.2f\n", desconto);
    printf("Valor final: %.2f\n", total);

    return 0;
}
