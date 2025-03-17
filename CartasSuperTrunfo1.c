#include <stdio.h>

int main(){
    char estado1[8], estado2[8];
    char cidade1[20], cidade2[20];
    char codcarta1[4], codcarta2[4];
    int população1, população2;
    float área1, área2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;
        
    printf("Digite o codigo da carta: \n");
    scanf("%s", &codcarta1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", "&cidade1");

    printf("Digite a população: \n");
    scanf("%d", "&populaçao1");

    printf("Digite a Área: \n");
    scanf("%f", &área1);

    printf("Digite o PIB; \N");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d, &PontosTuristicos1");
    
    printf("Digite o estado: \n");
    scanf("%c", "&estado2");

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codcarta2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", "&cidade2");

    printf("Digite a população: \n");
    scanf("%d", "&populaçao2");

    printf("Digite a Área: \n");
    scanf("%f", &área2);

    printf("Digite o PIB; \N");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d, &PontosTuristicos2");

    printf("Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codcarta1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", população1);
    printf("Área: %f \n", área1);
    printf("PIB: %f \n", PIB1);
    printf("Numero de pontos turisticos: %d \n", PontosTuristicos1);

    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codcarta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", população2);
    printf("Área: %f \n", área2);
    printf("PIB: %f \n", PIB2);
    printf("Numero de pontos turisticos: %d \n", PontosTuristicos2);

    return 0;


   
}