#include <stdio.h>


int main() {
    // Variáveis para armazenar os dados de cada cidade
    char estado[20]; // 2 letras iniciais Estado
    char codigo[5];  // Código da carta (ex: A01, A02, ..., H04)
    char cidade[40]; // Nome da cidade
    int populacao;    // População da cidade
    float area;       // Área da cidade (em km²)
    float pib;        // PIB da cidade (em milhões)
    int pontos_turisticos;  // Número de pontos turísticos


// Carta 1
    printf("Cadastro da cidade:\n");
    printf("Digite o código da carta: ");
    scanf("%s", codigo);
    printf("Digite as inicias do Estado: ");
    scanf("%s", &estado);
    printf("Digite a cidade: ");
    scanf("%s", cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);


    printf("\nCódigo da carta: %s\n", codigo);
    printf("Inicial Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhões\n", pib);
    printf("Pontos turísticos: %d\n\n", pontos_turisticos);

    // Carta 2

    printf("Cadastro da cidade:\n");
    printf("Digite o código da carta: ");
    scanf("%s", codigo);
    printf("Digite as inicias do Estado: ");
    scanf("%s", &estado);
    printf("Digite a cidade: ");
    scanf("%s", cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);


    printf("\nCódigo da carta: %s\n", codigo);
    printf(" Inicial Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhões\n", pib);
    printf("Pontos turísticos: %d\n\n", pontos_turisticos);

    return 0;
}
