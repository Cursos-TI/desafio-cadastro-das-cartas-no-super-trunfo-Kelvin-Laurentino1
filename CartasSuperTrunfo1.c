#include <stdio.h>

int main(){
    char estado1[8], estado2[8];
    char cidade1[20], cidade2[20];
    char codcarta1[4], codcarta2[4];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;

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

    printf("Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codcarta1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f \n", PIB1);
    printf("Numero de pontos turisticos: %d \n", PontosTuristicos1);

    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codcarta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f  bilhões de reais \n", PIB2);
    printf("Numero de pontos turisticos: %d \n", PontosTuristicos2);


    return 0;


   
}