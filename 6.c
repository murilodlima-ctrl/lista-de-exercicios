#include <stdio.h>

int main() {
    int opcao;

    printf("1 - Cliente\n");
    printf("2 - Fornecedor\n");
    printf("3 - Produto\n");
    printf("4 - Relatorio\n");
    printf("9 - Sair\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Esses sao os seus clientes\n");
            break;
        case 2:
            printf("Os fornecedores ainda nao foram cadastrados\n");
            break;
        case 3:
            printf("Temos 5 produtos cadastrados\n");
            break;
        case 4:
            printf("Relatorios sendo preparados\n");
            break;
        case 9:
            printf("Tchau!\n");
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
