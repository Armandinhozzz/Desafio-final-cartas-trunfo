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
    int escolhaJogador, opcao1, opcao2, resultado1, resultado2, soma1, soma2, soma3, soma4, somatotal1, somatotal2, resultado;

    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    pibpc1 = pib1 / populacao1;
    pibpc2 = pib2 / populacao2;

    SuperPoder1 = populacao1 + turisticos1 + area1 + pib1 + (densidadePopulacional1 * -1) + pibpc1;
    SuperPoder2 = populacao2 + turisticos2 + area2 + pib2 + (densidadePopulacional2 * -1) + pibpc2;

    //Comparações de cartas
    /* //Variaveis de comparacao

    int resultadoPopulacao, resultadoTuristicos,  resultadoArea, resultadoPib, resultadoDensidade,  resultadoPibpc , resultadoSuperPoder; 

    resultadoPopulacao = populacao1 > populacao2;
    resultadoTuristicos = turisticos1 > turisticos2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoDensidade = densidadePopulacional1 > densidadePopulacional2;
    resultadoPibpc = pibpc1 > pibpc2;
    resultadoSuperPoder = SuperPoder1 > SuperPoder2; */

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

    /*
    //Comparação de Cartas
    printf("Comparação de cartas\n");
    printf("População: Carta 2 venceu (%d)\n", resultadoPopulacao);
    printf("Número de pontos turísticos: Carta 1 venceu (%d)\n", resultadoTuristicos);
    printf("Area: Carta 2 venceu (%d)\n", resultadoArea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadoPib);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultadoDensidade);
    printf("Pib per Capita: Carta 1 venceu (%d)\n", resultadoPibpc);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuperPoder); 

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
            break;
    
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
            break;
    
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
            break;
    
        case 4:
            printf("## Comparacao de valores selecionada: PIB ##\n");
            printf("%s e %s\n", cidade1, cidade2);
            printf("Atributo selecionado: PIB\n");
            printf("PIB de Sao Paulo: %.2f e PIB do Rio de Janeiro: %.2f\n", pib1, pib2);
            if (pib1 > pib2){
                printf("Carta 1 venceu!\n");
            } else if (pib1 < pib2){
                printf("Carta 2 venceu!\n");
            } else {
                printf("Houve um empate!\n");
            }
            break;
    
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
            break;
    
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
            break;
    
        default:
            printf("Opcao invalida!\n");
            break;
    }
            */
            
           //Menu de comparação entre as Cartas (primeiro atributo)
            

            printf("Menu de Comparacao\n");
            printf("1. Populacao\n");
            printf("2. Pontos Turisticos\n");
            printf("3. Area\n");
            printf("4. PIB\n");
            printf("5. Densidade Populacional\n");
            printf("6. Pib per Capita\n");
            printf("7. Super Poder\n");

            printf("Escolha o primeiro atributo a ser comparado: \n");
            scanf("%d", &opcao1);

            switch (opcao1){
                case 1:
            printf("2. Pontos Turisticos\n");
            printf("3. Area\n");
            printf("4. PIB\n");
            printf("5. Densidade Populacional\n");
            printf("6. Pib per Capita\n");
            printf("7. Super Poder\n");
                break;
                case 2:
            printf("1. Populacao\n");
            printf("3. Area\n");
            printf("4. PIB\n");
            printf("5. Densidade Populacional\n");
            printf("6. Pib per Capita\n");
            printf("7. Super Poder\n");
                break;
                case 3:
                printf("1. Populacao\n");
            printf("2. Pontos Turisticos\n");
            printf("4. PIB\n");
            printf("5. Densidade Populacional\n");
            printf("6. Pib per Capita\n");
            printf("7. Super Poder\n");
                break;
                case 4:
            printf("1. Populacao\n");
            printf("2. Pontos Turisticos\n");
            printf("3. Area\n");
            printf("5. Densidade Populacional\n");
            printf("6. Pib per Capita\n");
            printf("7. Super Poder\n");
                break;
                case 5:
            printf("1. Populacao\n");
            printf("2. Pontos Turisticos\n");
            printf("3. Area\n");
            printf("4. PIB\n");
            printf("6. Pib per Capita\n");
            printf("7. Super Poder\n");
                break;
                case 6:
            printf("1. Populacao\n");
            printf("2. Pontos Turisticos\n");
            printf("3. Area\n");
            printf("4. PIB\n");
            printf("5. Densidade Populacional\n");
            printf("7. Super Poder\n");
                break;
                case 7:
            printf("1. Populacao\n");
            printf("2. Pontos Turisticos\n");
            printf("3. Area\n");
            printf("4. PIB\n");
            printf("5. Densidade Populacional\n");
            printf("6. Pib per Capita\n");
                break;

                default: {
                printf("Opcao invalida!\n");}
                break;
            }
                
            printf("Escolha o segundo atributo a ser comparado: \n");
            scanf("%d", &opcao2);

            if(opcao1 == opcao2){
                printf("Voce escolheu o mesmo atributo!\n");
            } else {
                switch (opcao1){
                case 1:
                printf("\nVoce escolheu o atributo Populacao!\n\n");

                printf("A populacao de %s é de: %d\n", cidade1, populacao1);
                printf("A populacao do %s é de: %d\n", cidade2, populacao2);
                
                soma1 = populacao1;
                soma2 = populacao2;

                break;
                case 2:
                printf("\nVoce escolheu o atributo Numero de Pontos Turisticos\n\n");

                printf("O Numero de Pontos Turisticos de %s é de: %d\n", cidade1, turisticos1);
                printf("O Numero de Pontos Turisticos de %s é de: %d\n", cidade2, turisticos2);
                
                soma1 = turisticos1;
                soma2 = turisticos2;

                break;
                case 3:
                printf("\nVoce escolheu o atributo Area\n\n");

                printf("A Area de %s é de: %.2f\n", cidade1, area1);
                printf("A Area do %s é de: %.2f\n", cidade2, area2);
                
                soma1 = area1;
                soma2 = area2;

                break;
                case 4:
                printf("\nVoce escolheu o atributo PIB!\n\n");

                printf("O PIB de %s é de: %.2f\n", cidade1, pib1);
                printf("O PIB do %s é de: %.2f\n", cidade2, pib2);
                
                soma1 = pib1;
                soma2 = pib2;

                break;
                case 5:
                printf("\nVoce escolheu o atributo Densidade Populacional!\n\n");

                printf("A Densidade Populacional de %s é de: %d\n", cidade1, densidadePopulacional1);
                printf("A Densidade Populacional do %s é de: %d\n", cidade2, densidadePopulacional2);
                
                soma1 = densidadePopulacional1;
                soma2 = densidadePopulacional1;

                break;
                case 6:
                printf("\nVoce escolheu o atributo PIB per Capita!\n\n");

                printf("O PIB per Capita de %s é de: %d\n", cidade1, pibpc1);
                printf("O PIB per Capita do %s é de: %d\n", cidade2, pibpc2);
                
                soma1 = pibpc1;
                soma2 = pibpc2;

                break;
                case 7:
                printf("\nVoce escolheu o atributo Super Poder\n\n");

                printf("O Super Poder de %s é de: %.2f\n", cidade1, SuperPoder1);
                printf("O Super Poder do %s é de: %.2f\n", cidade2, SuperPoder2);
                
                soma1 = SuperPoder1;
                soma2 = SuperPoder2;

                break;
                default: 
                printf("Opcao invalida!\n");
                break;
                }
            }
                switch (opcao2){
                    case 1:
                printf("\nVoce escolheu o atributo Populacao!\n\n");

                printf("A populacao de %s é de: %d\n", cidade1, populacao1);
                printf("A populacao do %s é de: %d\n", cidade2, populacao2);
                
                soma3 = populacao1;
                soma4 = populacao2;

                break;
                    case 2:
                printf("\nVoce escolheu o atributo Numero de Pontos Turisticos!\n\n");

                printf("O numero de Pontos Turisticos de %s é de: %d\n", cidade1, turisticos1);
                printf("O numero de Pontos Turisticos do %s é de: %d\n", cidade2, turisticos2);
                
                soma3 = turisticos1;
                soma4 = turisticos2;

                break;
                    case 3:
                    printf("\nVoce escolheu o atributo Area!\n\n");

                printf("A Area de %s é de: %.2f\n", cidade1, area1);
                printf("A Area do %s é de: %.2f\n", cidade2, area2);
                
                soma3 = area1;
                soma4 = area2;

                break;
                    case 4:
                    printf("\nVoce escolheu o atributo PIB!\n\n");

                printf("O PIB de %s é de: %.2f\n", cidade1, pib1);
                printf("O PIB do %s é de: %.2f\n", cidade2, pib2);
                
                soma3 = pib1;
                soma4 = pib2;

                break;
                    case 5:
                    printf("\nVoce escolheu o atributo Densidade Populacional!\n\n");

                printf("A Densidade Populacional de %s é de: %d\n", cidade1, densidadePopulacional1);
                printf("A Densidade Populacional do %s é de: %d\n", cidade2, densidadePopulacional2);
                
                soma3 = densidadePopulacional1;
                soma4 = densidadePopulacional1;

                break;
                    case 6:
                    printf("\nVoce escolheu o atributo O Pib per Capita!\n\n");

                printf("O Pib per Capita de %s é de: %d\n", cidade1, pibpc1);
                printf("O Pib per Capita do %s é de: %d\n", cidade2, pibpc2);
                
                soma3 = pibpc1;
                soma4 = pibpc2;

                break;
                    case 7:
                    printf("\nVoce escolheu o atributo Super Poder!\n\n");

                printf("O Super Poder de %s é de: %.2f\n", cidade1, SuperPoder1);
                printf("O Super Poder do %s é de: %.2f\n", cidade2, SuperPoder2);
                
                soma3 = SuperPoder1;
                soma4 = SuperPoder2;

                break;
                default:{
                    printf("Opcao Invalida!\n");
                    break;
                }
                }  

                somatotal1 = soma1 + soma3;
                somatotal2 = soma2 + soma4;

                printf("\nO valor total de atributos da Carta 1 e: %d\n", somatotal1);
                printf("O valor total de atributos da Carta 2 e: %d\n\n", somatotal2);

                //Caso seja empate
                resultado = somatotal1 > somatotal2 ? 1:0;

                if (somatotal1 == somatotal2){
                    printf("Empate!!!\n");
                } else if (resultado == 1){
                    printf("Carta 1: %s Venceu!!!\n", cidade1);
                } else {
                    printf("Carta 2: %s Venceu!!!\n", cidade2);
                }

                return 0;

            }


        