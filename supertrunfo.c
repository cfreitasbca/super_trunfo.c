#include <stdio.h>


int main() {
    // Variáveis para armazenar os dados de cada cidade

    //Variáveis carta 1 
    char estado1[20]; // 2 letras iniciais Estado
    char codigo1[5];  // Código da cidade (ex: A01, A02, ..., H04)
    char cidade1[40]; // Nome da cidade
    int populacao1;    // População da cidade
    float area1;       // Área da cidade (em km²)
    float pib1;        // PIB da cidade
    int pontos_turisticos1;  // Número de pontos turísticos
    float densidade_populacional1;// Densidade populacional (população/área da cidade)
    float pib_per_capita1; // PIB PER CAPITA (PIB/pela população)
    float super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 / densidade_populacional1;
    //soma todos atributos (população, área, PIB, número de pontos turísticos, PIB per capita. //(QUANTO MENOR A DENSIDADE POPULACIONAL MAIOR O PODER)

    //Variáveis carta 2
    char estado2[20]; // 2 letras iniciais Estado
    char codigo2[5];  // Código da cidade (ex: A01, A02, ..., H04)
    char cidade2[40]; // Nome da cidade
    int populacao2;    // População da cidade
    float area2;       // Área da cidade (em km²)
    float pib2;        // PIB da cidade
    int pontos_turisticos2;  // Número de pontos turísticos
    float densidade_populacional2; // Densidade populacional (população/área da cidade)
    float pib_per_capita2; // PIB PER CAPITA (PIB/pela população)
    float super_poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 / densidade_populacional2; 
    //soma todos atributos (população, área, PIB, número de pontos turísticos, PIB per capita. //(QUANTO MENOR A DENSIDADE POPULACIONAL MAIOR O PODER)    // Variáveis para armazenar os dados de cada cidade

    

    // Carta 1

    printf("Cadastro da carta 1:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);
    printf("Digite as inicias do Estado: ");
    scanf("%s", estado1);
    printf("Digite a cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%u", &populacao1);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade R$: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    pib_per_capita1 = (float) ((pib1 = 1000000000) / populacao1);
    densidade_populacional1 = populacao1 / area1;
    super_poder1 = (float) (populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1));

    

    printf("\nCódigo da cidade: %s\n", codigo1);
    printf("Inicial Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %u habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n\n", pib_per_capita1);
    printf("Super poder: %.2f\n\n", super_poder1);

    // Carta 2
    
    printf("Cadastro da carta 2:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);
    printf("Digite as inicias do Estado: ");
    scanf("%s", estado2);
    printf("Digite a cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%u", &populacao2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade R$: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    pib_per_capita2 = (float) ((pib2 = 1000000000) / populacao2);
    densidade_populacional2 = populacao2 / area2;
    super_poder2 = (float) (populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2));


    printf("\nCódigo da cidade: %s\n", codigo1);
    printf("Inicial Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %u habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f\n\n", pib_per_capita2);
    printf("Super poder: %.2f\n\n", super_poder2);

    // Comparação das cartas

    int resultado_pop;
    int resultado_area;
    int resultado_pib;
    int resultado_ponto_turistico;
    int resultado_densidade_demografica;
    int resultado_pib_per_capita;
    int resultado_super_poder;

    resultado_pop = populacao1 > populacao2;
    resultado_area = area1 > area2;
    resultado_pib = pib1 > pib2;
    resultado_ponto_turistico = pontos_turisticos1 > pontos_turisticos2;
    resultado_densidade_demografica = densidade_populacional1 > densidade_populacional2;
    resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    resultado_super_poder = super_poder1 > super_poder2;



    printf("\nA população da carta 1 é maior que da carta 2 ? %d\n", resultado_pop);
    printf("A área da carta 1 é maior que da carta 2? %d\n", resultado_area);
    printf("O PIB da carta 1 é maior que o PIB da carta 2? %d\n", resultado_pib);
    printf("A carta 1 possui mais pontos turísticos que a carta 2? %d\n", resultado_ponto_turistico);
    printf("A densidade demográfica da carta 1 é maior que a carta 2? %d\n", resultado_densidade_demografica);
    printf("PIB per capita da carta 1 é maior que a carta 2? %d\n", resultado_pib_per_capita);
    printf("A carta 1 tem um super poder maior que a carta 2? %d\n", resultado_super_poder);
           


    

    return 0;
}

