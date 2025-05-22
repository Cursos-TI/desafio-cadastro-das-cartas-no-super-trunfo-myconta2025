#include <stdio.h>

int main() {
    
    //especificando o tipo e o nome da variável de duas cartas
    char estado1, estado2;
    char codigo1 [4], codigo2 [4];
    char nomeCidade1 [20], nomeCidade2 [20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2, pibperCapita1, pibperCapita2;
    float superPoder1, superPoder2;

    //entrando com os dados da primeira carta
    printf("**Cadastro da Carta1** \n");
    printf("Digite o Estado: \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área (km2): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (bilhões): \n");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);


    //entrando com os dados da segunda carta
    printf("\n**Cadastro da Carta2** \n");
    printf("Digite o nome do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área (km2): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (bilhões): \n");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    //cáculos da densidade e do PIB per capita da Carta1 e Carta2
    densidade1 = populacao1 / area1;
    pibperCapita1 = pib1 / populacao1; 
    
    densidade2 = populacao2 / area2;
    pibperCapita2 = pib2 / populacao2;

    //calculando o super poder da carta1 e carta2 = população + área + PIB + pontos turísticos + PIB per capita + (1/densidade)
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibperCapita1 + (1 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibperCapita2 + (1 / densidade2);

    //exibindo os dados inseridos da primeira carta e o cáculo da densidade e PIB per capita
    printf("\nCarta1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", nomeCidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Pontos turísticos: %d \n", pontosTuristicos1);
    printf("Densidade populacional: %f \n", densidade1);
    printf("PIB per capita: %f \n", pibperCapita1);
    printf("Super poder: %f \n", superPoder1);

    //exibindo os dados inseridos da segunda carta e o cáculo da densidade e PIB per capita
    printf("\nCarta2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", nomeCidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade populacional: %f \n", densidade2);
    printf("PIB per capita: %f \n", pibperCapita2);
    printf("Super poder: %f \n", superPoder2);

    //comparação entre a carta1 e carta2 (se o valor é 1 a carta1 venceu, se o valor for 0 a carta2 venceu!)
    printf("\n**Comparação entre as cartas** \n");
    printf("População - a carta 1 venceu: %d \n", populacao1 > populacao2);
    printf("Area - a carta 1 venceu: %d \n", area1 > area2);
    printf("PIB - a carta 1 venceu: %d \n", pib1 > pib2);
    printf("Pontos turísticos - a carta 1 venceu: %d \n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade populacional - a carta 1 venceu: %d \n", densidade1 < densidade2);
    printf("PIB per capita - a carta 1 venceu: %d \n", pibperCapita1 > pibperCapita2);
    printf("Super poder - a carta 1 venceu: %d \n", superPoder1 > superPoder2);


    return 0;
}
