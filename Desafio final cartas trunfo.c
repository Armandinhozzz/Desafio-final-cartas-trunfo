#include <stdio.h>

int main() {
    // Carta 1
    int populacao1 = 12325000;
    int turisticos1 = 50;
    float area1 = 1521.11;
    float pib1 = 6992800000000;
    char estado1[] = "Sao Paulo";
    char codigo1[] = "S02";
    char cidade1[] = "Sao Paulo Capital";
    int densidadePopulacional1, pibpc1;
    float SuperPoder1;

    // Carta 2
    int populacao2 = 17000000;
    int turisticos2 = 12;
    float area2 = 2000.;
    float pib2 = 2500000000000;
    char estado2[] = "Rio de Janeiro";
    char codigo2[] = "R01";
    char cidade2[] = "Rio de Janeiro Capital";
    int densidadePopulacional2, pibpc2;
    float SuperPoder2;

    densidadePopulacional1 = (float) populacao1 / area1;
    densidadePopulacional2 = (float) populacao2 / area2;

    pibpc1 = (float) pib1 / populacao1;
    pibpc2 = (float) pib2 / populacao2;

    SuperPoder1 = populacao1 + turisticos1 + area1 + pib1 + (densidadePopulacional1 * -1) + pibpc1;
    SuperPoder2 = populacao2 + turisticos2 + area2 + pib2 + (densidadePopulacional2 * -1) + pibpc2;

    //Comparações de cartas

    int resultadoPopulacao, resultadoTuristicos,  resultadoArea, resultadoPib, resultadoDensidade,  resultadoPibpc , resultadoSuperPoder; 

    resultadoPopulacao = populacao1 > populacao2;
    resultadoTuristicos = turisticos1 > turisticos2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoDensidade = densidadePopulacional1 > densidadePopulacional2;
    resultadoPibpc = pibpc1 > pibpc2;
    resultadoSuperPoder = SuperPoder1 > SuperPoder2;

    // Imprimindo carta 1
    printf("CARTA 1\n");
    printf("Populacao: %d\n", populacao1);
    printf("Numero de Pontos Turisticos: %d\n", turisticos1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Densidade Populacional = %d\n", densidadePopulacional1);
    printf("Pib per Capita = %d\n", pibpc1);
    printf("Super Poder: %.2f\n\n", SuperPoder1);

    // Imprimindo carta 2
    printf("CARTA 2\n");
    printf("Populacao: %d\n", populacao2);
    printf("Numero de Pontos Turisticos: %d\n", turisticos2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2); 
    printf("Densidade Populacional: %d\n", densidadePopulacional2);
    printf("PIB per Capita: %d\n", pibpc2);
    printf("Super Poder: %.2f\n\n", SuperPoder2);

    //Comparação de Cartas
    printf("Comparação de cartas\n");
    printf("População: Carta 2 venceu (%d)\n", resultadoPopulacao);
    printf("Número de pontos turísticos: Carta 1 venceu (%d)\n", resultadoTuristicos);
    printf("Area: Carta 2 venceu (%d)\n", resultadoArea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadoPib);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultadoDensidade);
    printf("Pib per Capita: Carta 1 venceu (%d)\n", resultadoPibpc);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuperPoder);

    return 0;
}