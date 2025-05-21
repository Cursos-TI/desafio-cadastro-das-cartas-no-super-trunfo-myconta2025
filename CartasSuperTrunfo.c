#include <stdio.h>

int main() {
    
    //especificando o tipo e o nome da variável de duas cartas
    char estado1, estado2;
    char codigo1 [4], codigo2 [4];
    char nomeCidade1 [20], nomeCidade2 [20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;


    //entrando com os dados da primeira carta
    printf("**Cadastro da Carta1** \n");
    printf("Digite o Estado: \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
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
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    //exibindo os dados inseridos da primeira carta
    printf("\nCarta1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Pontos turísticos: %d \n", pontosTuristicos1);

    //exibindo os dados inseridos da segunda carta
    printf("\nCarta2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos turísticos: %d \n", pontosTuristicos2);

    return 0;
}
