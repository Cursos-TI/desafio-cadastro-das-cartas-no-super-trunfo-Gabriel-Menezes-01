#include <stdio.h>

int main(){
    // Declaração das variáveis para a primeira carta
    char estado1;                    // Estado: uma letra de A a H
    char codigo1[4];                 // Código da carta: letra + número (ex: A01)
    char cidade1[50];                // Nome da cidade
    unsigned long int populacao1;   // População da cidade (tipo alterado para acomodar números maiores)
    float area1;                     // Área em km²
    float pib1;                      // PIB em bilhões de reais
    int turisticos1;                 // Número de pontos turísticos
    
    // Declaração das variáveis para a segunda carta
    char estado2;                    // Estado: uma letra de A a H
    char codigo2[4];                 // Código da carta: letra + número (ex: B02)
    char cidade2[50];                // Nome da cidade
    unsigned long int populacao2;   // População da cidade (tipo alterado para acomodar números maiores)
    float area2;                     // Área em km²
    float pib2;                      // PIB em bilhões de reais
    int turisticos2;                 // Número de pontos turísticos
    
    // Variáveis para os cálculos
    float densidade1;                // Densidade populacional da carta 1 (hab/km²)
    float pib_per_capita1;           // PIB per capita da carta 1 (reais)
    float densidade2;                // Densidade populacional da carta 2 (hab/km²)
    float pib_per_capita2;           // PIB per capita da carta 2 (reais)
    float super_poder1;              // Super Poder da carta 1
    float super_poder2;              // Super Poder da carta 2
    
    // Variáveis para os resultados das comparações (1 = Carta 1 vence, 0 = Carta 2 vence)
    int comp_populacao, comp_area, comp_pib, comp_turisticos, comp_densidade, comp_pib_per_capita, comp_super_poder;
    
    // Leitura dos dados da primeira carta
    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turisticos1);
    
    // Leitura dos dados da segunda carta
    printf("\n=== CADASTRO DA CARTA 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turisticos2);
    
    // Cálculos para a primeira carta
    densidade1 = (float)populacao1 / area1;           // Densidade populacional (hab/km²)
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;  // PIB per capita (reais) - convertendo bilhões para reais
    
    // Cálculos para a segunda carta
    densidade2 = (float)populacao2 / area2;           // Densidade populacional (hab/km²)
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;  // PIB per capita (reais) - convertendo bilhões para reais
    
    // Cálculo do Super Poder para cada carta
    // Super Poder = população + área + PIB + pontos turísticos + PIB per capita + (1/densidade)
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + (float)turisticos1 + pib_per_capita1 + (1.0 / densidade1);
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)turisticos2 + pib_per_capita2 + (1.0 / densidade2);
    
    // Comparações entre as cartas (1 = Carta 1 vence, 0 = Carta 2 vence)
    comp_populacao = (populacao1 > populacao2) ? 1 : 0;        // Maior população vence
    comp_area = (area1 > area2) ? 1 : 0;                       // Maior área vence
    comp_pib = (pib1 > pib2) ? 1 : 0;                          // Maior PIB vence
    comp_turisticos = (turisticos1 > turisticos2) ? 1 : 0;     // Mais pontos turísticos vence
    comp_densidade = (densidade1 < densidade2) ? 1 : 0;        // MENOR densidade vence (regra especial)
    comp_pib_per_capita = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;  // Maior PIB per capita vence
    comp_super_poder = (super_poder1 > super_poder2) ? 1 : 0;  // Maior Super Poder vence
    
    // Exibição dos dados da primeira carta
    printf("\n=== DADOS CADASTRADOS ===\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    
    // Exibição dos resultados das comparações
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    printf("População: Carta %d venceu (%d)\n", comp_populacao ? 1 : 2, comp_populacao);
    printf("Área: Carta %d venceu (%d)\n", comp_area ? 1 : 2, comp_area);
    printf("PIB: Carta %d venceu (%d)\n", comp_pib ? 1 : 2, comp_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", comp_turisticos ? 1 : 2, comp_turisticos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", comp_densidade ? 1 : 2, comp_densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", comp_pib_per_capita ? 1 : 2, comp_pib_per_capita);
    printf("Super Poder: Carta %d venceu (%d)\n", comp_super_poder ? 1 : 2, comp_super_poder);
    
    return 0;
}