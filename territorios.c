// -----------------------------------------------
// Projeto: Cadastro de Territórios
// Autor: Samara Rennys Souza Paiva
// Descrição: Sistema simples que cadastra e exibe
//            informações de 5 territórios utilizando structs.
// -----------------------------------------------

#include <stdio.h>
#include <string.h>

// Estrutura que representa um território
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct Territorio territorios[5];

    printf("=== CADASTRO DE TERRITORIOS ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do territorio %d: ", i + 1);
        scanf(" %[^\n]", territorios[i].nome);

        printf("Digite a cor do exercito: ");
        scanf(" %[^\n]", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); // limpa o buffer de entrada

        printf("\n");
    }

    printf("=== DADOS DOS TERRITORIOS CADASTRADOS ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("---------------------------------\n");
    }

    printf("\nCadastro concluido com sucesso!\n");

    return 0;
}
