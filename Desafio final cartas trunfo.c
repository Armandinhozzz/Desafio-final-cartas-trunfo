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
    float area2 = 2000;
    float pib2 = 2500000000000;
    char estado2[] = "Rio de Janeiro";
    char codigo2[] = "R01";
    char cidade2[] = "Rio de Janeiro Capital";
    int densidadePopulacional2, pibpc2;
    float SuperPoder2;

    //Menu principal
    int escolhaJogador;

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
    printf("Super Poder: Carta 1 venceu (%d)\n\n", resultadoSuperPoder);

    //Comparação de Cartas por Atributo
    printf("Comparacao de cartas (Atributo: Populacao):\n");
    printf("Carta 1 - %s: %d\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d\n", cidade2, populacao2);
    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    }

    printf("Comparacao de cartas (Atributo: Numero de pontos turisticos): \n");
    printf("Carta 1 - %s: %d\n", cidade1, turisticos1);
    printf("Carta 2 - %s: %d\n", cidade2, turisticos2);
    if(turisticos1 > turisticos2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);

    }

    printf("Comparacao de cartas (Atributo: Area): \n");
    printf("Carta 1 - %s: %.2f\n", cidade1, area1);
    printf("Carta 2 - %s: %.2f\n", cidade2, area2);
    if(area1 > area2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    }

    printf("Comparacao de cartas (Atributo: PIB): \n");
    printf("Carta 1 - %s: %.2f\n", cidade1, pib1);
    printf("Carta 1 - %s: %.2f\n", cidade2, pib2);
    if(pib1 > pib2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    }

    printf("Comparacao de cartas (Atributo: Densidade Populacional): \n");
    printf("Carta 1 - %s: %d\n", cidade1, densidadePopulacional1);
    printf("Carta 2 - %s: %d\n", cidade2, densidadePopulacional2);
    if(densidadePopulacional1 < densidadePopulacional2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    }

    printf("Comparacao de cartas (Atributo: Pib per Capita): \n");
    printf("Carta 1 - %s: %d\n", cidade1, pibpc1);
    printf("Carta 2 - %s: %d\n", cidade2, pibpc2);
    if(pibpc1 > pibpc2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    }

    printf("Comparacao de cartas (Atributo: Super Poder): \n");
    printf("Carta 1 - %s: %.2f\n", cidade1, SuperPoder1);
    printf("Carta 2 - %s: %.2f\n", cidade2, SuperPoder2);
    if(SuperPoder1 > SuperPoder2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    }

    //Comparacao de cartas com menu interativo
    printf("Escolha um atributo a ser comparado: \n");
    printf("1. Populacao\n");
    printf("2. Pontos Turisticos\n");
    printf("3. Area\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. Pib per Capita\n");
    printf("Escolha: \n");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador){
        case 1:
        printf("## Comparacao de valores selecionada: Populacao ##\n");
        printf("%s e %s\n", cidade1, cidade2);
        printf("Atributo selecionado: Populacao\n");
        printf("Populacao de Sao Paulo: %d e Populacao do Rio de Janeiro: %d\n", populacao1, populacao2);
        if (populacao1 > populacao2){
            printf("Carta 1 venceu!\n");
        } else if (populacao1 < populacao2){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }

        case 2:
        printf("## Comparacao de valores selecionada: Numero de Pontos Turisticos ##\n");
        printf("%s e %s\n", cidade1, cidade2);
        printf("Atributo selecionado: Numero de Pontos Turisticos\n");
        printf("Pontos Turisticos de Sao Paulo: %d e Pontos Turisticos do Rio de Janeiro: %d\n", turisticos1, turisticos2);
        if (turisticos1 > turisticos2){
            printf("Carta 1 venceu!\n");
        } else if (turisticos1 < turisticos2){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }

        case 3:
        printf("## Comparacao de valores selecionada: Area ##\n");
        printf("%s e %s\n", cidade1, cidade2);
        printf("Atributo selecionado: Area\n");
        printf("Area de Sao Paulo: %.2f e Area do Rio de Janeiro: %.2f\n", area1, area2);
        if (area1 > area2){
            printf("Carta 1 venceu!\n");
        } else if (area1 < area2){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }

        case 4:
        printf("## Comparacao de valores selecionada: PIB ##\n");
        printf("%s e %s\n", cidade1, cidade2);
        printf("Atributo selecionado: PIB Turisticos\n");
        printf("PIB de Sao Paulo: %.2f e PIB do Rio de Janeiro: %.2f\n", pib1, pib2);
        if (pib1 > pib2){
            printf("Carta 1 venceu!\n");
        } else if (pib1 < pib2){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }

        case 5:
        printf("## Comparacao de valores selecionada: Densidade Populacional ##\n");
        printf("%s e %s\n", cidade1, cidade2);
        printf("Atributo selecionado: Densidade Populacional\n");
        printf("Densidade Populacional de Sao Paulo: %d e Densidade Populacional do Rio de Janeiro: %d\n", densidadePopulacional1, densidadePopulacional2);
        if (densidadePopulacional1 < densidadePopulacional2){
            printf("Carta 1 venceu!\n");
        } else if (densidadePopulacional1 > densidadePopulacional2){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }

        case 6:
        printf("## Comparacao de valores selecionada: PIB per Capita ##\n");
        printf("%s e %s\n", cidade1, cidade2);
        printf("Atributo selecionado: PIB per Capita\n");
        printf("Pib per Capita de Sao Paulo: %d e Pib per Capita do Rio de Janeiro: %d\n", pibpc1, pibpc2);
        if (pibpc1 > pibpc2){
            printf("Carta 1 venceu!\n");
        } else if (pibpc1 < pibpc2){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }
    }
    return 0;
} 