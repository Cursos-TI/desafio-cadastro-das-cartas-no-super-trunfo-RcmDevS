#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os dados de duas cartas:
    // Cada carta representa uma cidade, e para cada uma delas, armazenamos o estado,
    // código da carta, nome da cidade, população, área, PIB, número de pontos turísticos,
    // densidade populacional, PIB per capita e Super Poder.
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Coleta dados da Carta 1:
    // O programa solicita que o usuário insira informações sobre a primeira cidade.
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

    // Calcula a densidade populacional e o PIB per capita para a Carta 1:
    // Aqui, dividimos a população pela área para obter a densidade populacional.
    // O PIB per capita é calculado dividindo o PIB pela população.
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Calcula o Super Poder para a Carta 1:
    // O Super Poder é uma métrica composta que considera vários atributos da cidade,
    // incluindo o inverso da densidade para dar vantagem a cidades menos densas.
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // Coleta dados da Carta 2:
    // Repetimos o mesmo processo de coleta de dados para a segunda cidade.
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

    // Calcula a densidade populacional e o PIB per capita para a Carta 2:
    // Aplicamos os mesmos cálculos de densidade e PIB per capita para a segunda cidade.
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Calcula o Super Poder para a Carta 2:
    // O Super Poder é calculado da mesma forma para a segunda cidade.
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibe os dados e cálculos da Carta 1:
    // Após o cálculo, exibimos os dados e as métricas calculadas para a primeira cidade.
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibe os dados e cálculos da Carta 2:
    // Da mesma forma, exibimos os dados e métricas para a segunda cidade.
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação das Cartas:
    // O programa compara cada atributo das duas cartas, determinando qual carta vence
    // em cada categoria. Para densidade, a carta com menor valor vence, enquanto para
    // os outros atributos, a carta com maior valor é a vencedora.
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
