#include <stdio.h>
int main(){

    char estado1, estado2;
    char codigodacarta1[3], codigodacarta2[3];
    char nomecidade1[20], nomecidade2[20];
    int populacao1, numeropontosturisticos1;
    int populacao2, numeropontosturisticos2;
    float areaemkm1, areaemkm2;
    float pib1, pib2;
    // Novos : / O pibpercapita1 = (float) (por ex) tem que ficar posicionado APÓS inserir os dados.
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    


    // Representação do estado 1
    printf ("Escolha uma letra de 'A' a 'H' para representar o estado 1:\n");
    scanf (" %c", &estado1);

    // Codigo da carta 1
    printf ("Contendo uma letra seguida de um numero (Ex. : A1, A2, B1, B2), informe :\n");
    printf ("O codigo da carta 1: \n");
    scanf ("%s", codigodacarta1);

    // Nome da cidade 1
    printf ("O nome da cidade do estado 1:\n");
    scanf ("%s", nomecidade1);

    // Quantidade populacional da cidade 1
    printf ("Quantas pessoas vivem no estado 1?\n");
    scanf ("%d", &populacao1);

    // Area em km² da cidade 1
    printf ("A area em km² do estado 1:\n");
    scanf ("%f", &areaemkm1);

    // O PIB da cidade 1
    printf ("O PIB do estado 1:\n");
    scanf ("%f", &pib1);

    // Numero de pontos turisticos da cidade 1
    printf ("Numero de pontos turisticos do estado 1:\n");
    scanf ("%d", &numeropontosturisticos1);

    // ========== NOVAS FUNÇÕES ==========
    pibpercapita1 = (float) pib1 / populacao1;
    densidade1 = (float) populacao1 / areaemkm1;


    // ================ CARTAS 2 ================
    printf ("Perfeito! agora vamos para a segunda carta!\n");

    // Representação do estado 2
    printf ("Escolha uma letra de 'A' a 'H' para representar o estado 2:\n");
    scanf (" %c", &estado2);

    // Codigo da carta 2
    printf ("Contendo uma letra seguida de um numero (Ex. : A1, A2, B1, B2), informe :\n");
    printf ("O codigo da carta 2: \n");
    scanf ("%s", codigodacarta2);

    // Nome da cidade 2
    printf ("O nome da cidade do estado 2:\n");
    scanf ("%s", nomecidade2);

    // Quantidade populacional da cidade 2
    printf ("Quantas pessoas vivem no estado 2?\n");
    scanf ("%d", &populacao2);

    // Area em km² da cidade 2
    printf ("A area em km² do estado 2:\n");
    scanf ("%f", &areaemkm2);

    // O PIB da cidade 2
    printf ("O PIB do estado 2:\n");
    scanf ("%f", &pib2);

    // Numero de pontos turisticos da cidade 2
    printf ("Numero de pontos turisticos do estado 2:\n");
    scanf ("%d", &numeropontosturisticos2);

    // ========== NOVAS FUNÇÕES ==========
    pibpercapita2 = (float) pib2 / populacao2;
    densidade2 = (float) populacao2 / areaemkm2;


    // Exibição de dados da Carta 1 :

    printf ("Carta 1 :\n");
    printf ("Letra representativa do estado 1: %c\n", estado1);
    printf ("Codigo representativo do estado 1: %s\n", codigodacarta1);
    printf ("Nome da cidade do estado 1: %s\n", nomecidade1);
    printf ("Quantidade populacional do estado 1: %d pessoas\n", populacao1);
    printf ("Area em km² do estado 1: %.2f quilometros quadrados\n", areaemkm1);
    printf ("O PIB do estado 1: R$%.2f\n", pib1);
    printf ("Numero de pontos turisticos do estado 1: %d\n", numeropontosturisticos1);
    // Novo (Nível Aventureiro) :
    printf ("O PIB per capita é: %.2f\n", pibpercapita1);
    printf ("Densidade populacional: %.2f\n", densidade1);

    // Exibição de dados da Carta 2 :
printf ("\n");

    printf ("Carta 2 :\n");
    printf ("Letra representativa do estado 2: %c\n", estado2);
    printf ("Codigo representativo do estado 2: %s\n", codigodacarta2);
    printf ("Nome da cidade do estado 2: %s\n", nomecidade2);
    printf ("Quantidade populacional do estado 2: %d pessoas\n", populacao2);
    printf ("Area em km² do estado 2: %.2f quilometros quadrados\n", areaemkm2);
    printf ("O PIB do estado 2: R$%.2f\n", pib2);
    printf ("Numero de pontos turisticos do estado 2: %d\n", numeropontosturisticos2);
    // Novo (Nível Aventureiro) :
    printf ("O PIB per capita é: %.2f\n", pibpercapita2);
    printf ("Densidade populacional: %.2f\n", densidade2);

    return 0;


}