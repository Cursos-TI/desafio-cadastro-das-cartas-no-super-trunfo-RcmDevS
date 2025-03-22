#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // Declaração das variáveis para guardar os dados das cartas
    char estado1, estado2; // Armazena o estado das cidades
    char codigo1[4], codigo2[4]; // Armazena o código das cartas
    char nomeCidade1[50], nomeCidade2[50]; // Armazena o nome das cidades
    int populacao1, populacao2; // Armazena a população das cidades
    float area1, area2, pib1, pib2; // Armazena a área e o PIB das cidades
    int pontosTuristicos1, pontosTuristicos2; // Armazena o número de pontos turísticos

    // Coleta dados da Carta 1
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // Lê um caractere para o estado
    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo1); // Lê um código de até 3 caracteres
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê o nome da cidade, incluindo espaços
    printf("População: ");
    scanf("%d", &populacao1); // Lê um inteiro para a população
    printf("Área (em km²): ");
    scanf("%f", &area1); // Lê um número decimal para a área
    printf("PIB: ");
    scanf("%f", &pib1); // Lê um número decimal para o PIB
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1); // Lê um inteiro para os pontos turísticos

    // Coleta dados da Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2); // Lê um caractere para o estado
    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo2); // Lê um código de até 3 caracteres
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); // Lê o nome da cidade, incluindo espaços
    printf("População: ");
    scanf("%d", &populacao2); // Lê um inteiro para a população
    printf("Área (em km²): ");
    scanf("%f", &area2); // Lê um número decimal para a área
    printf("PIB: ");
    scanf("%f", &pib2); // Lê um número decimal para o PIB
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2); // Lê um inteiro para os pontos turísticos

    // Exibe os dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibe os dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0; // Indica que o programa terminou com sucesso
}
