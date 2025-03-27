#include <stdio.h>

int main() {
    int  populacao, pontos;
    char nome[50], estado[3];
    char codigo[10];
    float area, pib;

    
    printf("\n--- Carta 01 ---\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome); 

    printf("Digite a sigla do estado : ");
    scanf("%s", estado); 

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos);

    
    printf("\n--- Carta 01 ---\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: R$ %f\n", pib);
    printf("Pontos turísticos: %d\n", pontos);

    printf("\n--- Carta 02 ---\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome); 

    printf("Digite a sigla do estado : ");
    scanf("%s", estado); 

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos);

    
    printf("\n--- Carta 02 ---\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: R$ %f\n", pib);
    printf("Pontos turísticos: %d\n", pontos);

    return 0;
}
