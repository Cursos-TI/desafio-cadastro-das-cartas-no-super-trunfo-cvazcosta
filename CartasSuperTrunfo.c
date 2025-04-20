#include <stdio.h>

int main() {
    
    char estado, codigo_carta[4], nome_cidade[30];
    int populacao, pontos_turisticos;
    float area, pib;

    // Cadastro da 1ª carta    
    printf("Informe o código do estado: ");
    scanf("%c", &estado);

    printf("Informe o código da carta: ");
    scanf("%s", codigo_carta);

    printf("Informe o nome da cidade (separado por _ se for nome composto): ");
    scanf("%s", nome_cidade);

    printf("Informe a quantidade de habitantes: ");
    scanf("%d", &populacao);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    printf("Informe a área da cidade em Km²: ");
    scanf("%f", &area);

    printf("Informe o PIB (em bilhões de Reais): ");
    scanf("%f", &pib);

    // Impressão das informações da primeira carta
    printf("\nInformações da Carta Cadastrada\n");
    printf("\nEstado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo_carta);
    printf("Cidade: %s\n", nome_cidade);
    printf("Número de Habitantes: %d\n", populacao);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Área: %.2f Km²\n", area);
    printf("PIB (em bilhões de reais): R$ %.2f bi\n\n", pib);

    // Cadastro da 2ª carta
    printf("Informe o código do estado: ");
    scanf(" %c", &estado);

    printf("Informe o código da carta: ");
    scanf("%s", codigo_carta);

    printf("Informe o nome da cidade (separado por _ se for nome composto): ");
    scanf("%s", nome_cidade);

    printf("Informe a quantidade de habitantes: ");
    scanf("%d", &populacao);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    printf("Informe a área da cidade em Km²: ");
    scanf("%f", &area);

    printf("Informe o PIB (em bilhões de Reais): ");
    scanf("%f", &pib);

    // Impressão das informações da 2ª carta
    printf("\nInformações da Carta Cadastrada\n");
    printf("\nEstado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo_carta);
    printf("Cidade: %s\n", nome_cidade);
    printf("Número de Habitantes: %d\n", populacao);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Área: %.2f Km²\n", area);
    printf("PIB (em bilhões de reais): R$ %.2f bi\n", pib);

    return 0;
}