#include <stdio.h>

int main(){
    // Declaração das variáveis para a primeira carta
    char estado1;                    // Estado: uma letra de A a H
    char codigo1[4];                 // Código da carta: letra + número (ex: A01)
    char cidade1[50];                // Nome da cidade
    int populacao1;                  // População da cidade
    float area1;                     // Área em km²
    float pib1;                      // PIB em bilhões de reais
    int turisticos1;                 // Número de pontos turísticos
    
    // Declaração das variáveis para a segunda carta
    char estado2;                    // Estado: uma letra de A a H
    char codigo2[4];                 // Código da carta: letra + número (ex: B02)
    char cidade2[50];                // Nome da cidade
    int populacao2;                  // População da cidade
    float area2;                     // Área em km²
    float pib2;                      // PIB em bilhões de reais
    int turisticos2;                 // Número de pontos turísticos
    
    // Leitura dos dados da primeira carta
    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
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
    scanf("%d", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turisticos2);
    
    // Exibição dos dados da primeira carta
    printf("\n=== DADOS CADASTRADOS ===\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1);
    
    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);
    
    return 0;
}