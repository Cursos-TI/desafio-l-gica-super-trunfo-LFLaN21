#include <stdio.h>


int main() {


    char estado1, estado2;
    char codigoDaCarta1 [20], codigoDaCarta2[20];
    char nomeDaCidade1 [20], nomeDaCidade2[20];
    int populacao1, populacao2, pontoTuristico1, pontoTuristico2;
    float PIB1, PIB2, areakm1, areakm2, densidadePopulacional1, densidadePopulacional2, PIBperCapita1, PIBperCapita2;

    printf("\n***SUPER TRUNFO***\n");

//O print para inserção de dados da carta n1°.
    printf("\nCarta N1°\n");

    printf("Digite o estado: \n");
    scanf("%s", &estado1);
    
    printf("Digite o código da carta em sequência:\n");
    scanf("%s", &codigoDaCarta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nomeDaCidade1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área km²:\n");
    scanf("%f", &areakm1);

    printf("PIB:\n");
    scanf("%f", &PIB1);

    printf("Insira a quantidade de pontos turísticos:\n");
    scanf("%i", &pontoTuristico1);

//O print para inserção de dados da carta n2°
    printf("\nCarta N2°\n");

    printf("Digite o estado: \n");
    scanf("%s", &estado2);
    
    printf("Digite o código da carta em sequência:\n");
    scanf("%s", &codigoDaCarta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nomeDaCidade2);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área km²:\n");
    scanf("%f", &areakm2);

    printf("PIB:\n");
    scanf("%f", &PIB2);

    printf("Insira a quantidade de pontos turísticos:\n");
    scanf("%i", &pontoTuristico2);

//Calculo da densidade populacional e o PIB per capita.
    densidadePopulacional1 = populacao1 / areakm1;
    densidadePopulacional2 = populacao2 / areakm2;
    PIBperCapita1 = PIB1 / populacao1;
    PIBperCapita2 = PIB2 / populacao2;


    printf("Densidade populacional da cidade 1: %.2f\n", densidadePopulacional1);
    printf("Densidade populacional da cidade 2: %.2f\n", densidadePopulacional2);
    printf("PIB per capita da cidade 1: %.2f\n", PIBperCapita1);
    printf("PIB per capita da cidade 2: %.2f\n", PIBperCapita2);

    if (densidadePopulacional1 > densidadePopulacional2) {
        printf("A carta 2 Venceu!\n");
    } else if (densidadePopulacional1 < densidadePopulacional2) {
        printf("A carta 1 Venceu!\n");
    } else {
        printf("\n***EMPATOU***\n");
    }



    return 0;
}
