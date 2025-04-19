#include <stdio.h>

int main(){
    char estado1[8], estado2[8];
    char cidade1[20], cidade2[20];
    char codcarta1[4], codcarta2[4]; // codigo da carta 
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;
    float  DP1, DP2; // DESIDADE POPULACIONAL 
    float PIBC1, PIBC2 ; // PIB PER CAPITA 

    printf("Carta 1 \n");
    printf("Digite o estado: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codcarta1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB; \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &PontosTuristicos1);
    printf("\n");

    printf("Carta 2 \n");
    printf("Digite o estado: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codcarta2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB; \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &PontosTuristicos2);

    DP1 = (float) populacao1 / area1;
    DP2 = (float) populacao2 / area2;
    PIBC1 =  PIB1 / populacao1;
    PIBC2 =  PIB2 / populacao2;

    printf("Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codcarta1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f \n", PIB1);
    printf("Numero de pontos turisticos: %d \n", PontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km² \n", DP1);
    printf("PIB per capita: %.2f reais \n", PIBC1);
    printf("\n");

    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codcarta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f  bilhões de reais \n", PIB2);
    printf("Numero de pontos turisticos: %d \n", PontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km² \n", DP2);
    printf("PIB per capita: %.2f reais \n", PIBC2);


    return 0;


}