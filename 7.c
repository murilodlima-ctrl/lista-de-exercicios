#include <stdio.h>

int main() {
    int opcao;

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Esses sao os seus clientes\n");
    } else if (opcao == 2) {
        printf("Os fornecedores ainda nao foram cadastrados\n");
    } else if (opcao == 3) {
        printf("Temos 5 produtos cadastrados\n");
    } else if (opcao == 4) {
        printf("Relatorios sendo preparados\n");
    } else if (opcao == 9) {
        printf("Tchau!\n");
    } else {
        printf("Opcao invalida\n");
    }

    return 0;
}
