#include <stdio.h>


int main() {
    // Variáveis para armazenar os dados de cada cidade
    char estado[20]; // 2 letras iniciais Estado
    char codigo[5];  // Código da cidade (ex: A01, A02, ..., H04)
    char cidade[40]; // Nome da cidade
    int populacao;    // População da cidade
    float area;       // Área da cidade (em km²)
    float pib;        // PIB da cidade
    int pontos_turisticos;  // Número de pontos turísticos
    float densidade_populacional; // Densidade populacional (area da cidade / população)
    float pib_per_capita; // PIB PER CAPITA (PIB/pela população)

    

// Carta 1
    printf("Cadastro da cidade:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo);
    printf("Digite as inicias do Estado: ");
    scanf("%s", estado);
    printf("Digite a cidade: ");
    scanf("%s", cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    

    printf("\nCódigo da cidade: %s\n", codigo);
    printf("Inicial Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade demográfica: %.2f hab/km²\n", area / populacao);
    printf("PIB per capita: R$ %.2f\n\n", pib / populacao);

    // Carta 2

    printf("Cadastro da cidade:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo);
    printf("Digite as inicias do Estado: ");
    scanf("%s", &estado);
    printf("Digite a cidade: ");
    scanf("%s", cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);


    printf("\nCódigo da cidade: %s\n", codigo);
    printf(" Inicial Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade demográfica: %.2f hab/km²\n", area / populacao);
    printf("PIB per capita: R$ %.2f\n\n", pib / populacao);

    return 0;
}
