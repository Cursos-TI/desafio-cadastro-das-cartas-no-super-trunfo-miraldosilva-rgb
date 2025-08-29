#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    #include <stdio.h>

    int main() {
        // Carta 1
        char estado1;
        char codigo1 [4];
        char nomeCidade1 [50];
        int populacao1;
        float area1;
        float pibq;
        int pontosTturisticos1;

        // Carta 2

        char estado2;
        char codigo2 [4];
        char nomeCidade2[50];
        int populacao2;
        float area1;
        float pibq;
        int pontosTturisticos2;

        // =====  Entrada da dados da Carta 1 ==== printf("Cadastro da carta 1\n"),

        printf("Informe o Estado(A-H): ");
        scanf("%c", &estado1);

        printf("Informe o Codigo da Carta (ex: A01):");
        scanf("%s", codigo1);

        printf("Informe o Nome da Cidade:");
        scanf(" %[^\n]", nomeCidade1); //le ate o enter

        printf("Informe a População:");
        scanf("%d", &populacao1);

        printf("Informe a Área (km²):");
        scanf("%f", &area1);

        printf("Informe o PIB (em bilhões de reais):");
        scanf("%f", &pib1);

        printf("Informe o Número de Pontos Turísticos:");
        scanf("%d", &pontosTutisticos1);

          // ===== Entrada de dados Carta 2 =====
    printf("\nCadastro da Carta 2\n");

    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a População: ");
    scanf("%d", &populacao2);

    printf("Informe a Área (km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

     // ===== Saída formatada =====
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


    return 0;
}
