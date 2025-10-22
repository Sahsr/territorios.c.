// -----------------------------------------------
// Projeto: Cadastro de Territórios
// Autor: Samara Rennys Souza Paiva
// Descrição: Sistema simples que cadastra e exibe
//            informações de 5 territórios utilizando structs.
// -----------------------------------------------

#include <stdio.h>   // Biblioteca padrão de entrada e saída (printf, scanf)
#include <string.h>  // Biblioteca usada para manipulação de strings

// -----------------------------------------------
// Estrutura que representa um território
// Contém três campos:
// - nome: nome do território
// - cor: cor do exército
// - tropas: número de tropas alocadas no território
// -----------------------------------------------
struct Territorio {
    char nome[30];  // Armazena o nome do território (ex: "Brasil")
    char cor[10];   // Armazena a cor do exército (ex: "Verde")
    int tropas;     // Armazena a quantidade de tropas no território
};

// -----------------------------------------------
// Função principal (ponto de entrada do programa)
// Responsável por:
// - cadastrar 5 territórios
// - armazenar seus dados em um vetor de structs
// - exibir os dados cadastrados na tela
// -----------------------------------------------
int main() {
    // Declaração de um vetor que pode armazenar até 5 territórios
    struct Territorio territorios[5];

    // Exibe um título de boas-vindas
    printf("=== CADASTRO DE TERRITORIOS ===\n\n");

    // -----------------------------------------------
    // Laço de repetição para cadastrar os 5 territórios
    // A cada repetição, o usuário insere:
    // - Nome do território
    // - Cor do exército
    // - Quantidade de tropas
    // -----------------------------------------------
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do territorio %d: ", i + 1);
        // Lê uma string com espaços (ex: "Reino do Norte")
        scanf(" %[^\n]", territorios[i].nome);

        printf("Digite a cor do exercito: ");
        scanf(" %[^\n]", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        // Lê um número inteiro e armazena no campo 'tropas'
        scanf("%d", &territorios[i].tropas);

        getchar(); // Limpa o buffer para evitar erros de leitura futura
        printf("\n"); // Espaço entre os cadastros
    }

    // -----------------------------------------------
    // Exibição dos dados cadastrados
    // Percorre o vetor e mostra as informações de cada território
    // -----------------------------------------------
    printf("=== DADOS DOS TERRITORIOS CADASTRADOS ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("---------------------------------\n");
    }

    // Mensagem final de confirmação
    printf("\nCadastro concluido com sucesso!\n");

    // Retorno 0 indica que o programa foi executado com sucesso
    return 0;
}
