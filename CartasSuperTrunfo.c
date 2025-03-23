
#include <stdio.h>

// Função principal do programa
int main() {
    // Declaração das variáveis para armazenar informações da primeira cidade
    char estado1;  // Armazena o estado representado por uma letra de A a H
    char codigo1[4];  // Código da cidade, exemplo A01
    char nomeCidade1[50];  // Nome completo da cidade
    unsigned long int populacao1;  // População total da cidade
    float area1;  // Área total da cidade em km²
    float pib1;  // Produto Interno Bruto da cidade em bilhões de reais
    int pontosTuristicos1;  // Número de pontos turísticos na cidade
    float densidade1;  // Densidade populacional calculada
    float pibPerCapita1;  // PIB per capita calculado
    float superPoder1;  // Valor de super poder calculado para a cidade

    // Declaração das variáveis para armazenar informações da segunda cidade
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // Captura de dados do usuário para a primeira cidade
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos para a primeira cidade
    densidade1 = (float)populacao1 / area1;  // Calcula a densidade populacional
    pibPerCapita1 = pib1 / populacao1;  // Calcula o PIB per capita

    // Captura de dados do usuário para a segunda cidade
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a segunda cidade
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Cálculo do super poder de cada cidade
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Comparação e exibição dos resultados
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);  // Densidade menor é melhor
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    // Termina o programa
    return 0;
}


