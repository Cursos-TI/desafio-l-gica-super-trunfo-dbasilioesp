#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char codigo1[3];
    char codigo2[3];
    char pais1[20];
    char pais2[20];
    char estado1[20];
    char estado2[20];
    char cidade1[20];
    char cidade2[20];
    int populacao1;
    int populacao2;
    int pontos_turisticos1;
    int pontos_turisticos2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    float densidade_populacional1;
    float densidade_populacional2;
    float pib_percapita1;
    float pib_percapita2;

    float super_poder1, super_poder2;
    int propriedade;
    int vencedora = 1;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Cadastro das Carta 1:
    printf("CADASTRO DA CARTA 1\n");
    printf("###################\n");

    printf("Digite nome do pais: \n");
    scanf("%s", &pais1);

    printf("Digite nome da estado: \n");
    scanf("%s", &estado1);

    printf("Digite nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigo1);

    printf("Digite o numero da populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a area (km2): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    // Cadastro das Carta 2:
    printf("\nCADASTRO DA CARTA 2\n");
    printf("###################\n");

    printf("Digite nome do pais: \n");
    scanf("%s", &pais2);

    printf("Digite nome da estado: \n");
    scanf("%s", &estado2);

    printf("Digite nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigo2);

    printf("Digite o numero da populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a area (km2): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    densidade_populacional1 = (float)populacao1 / area1;
    pib_percapita1 = (float)pib1 / populacao1;

    pib_percapita2 = (float)pib2 / populacao2;
    densidade_populacional2 = (float)populacao2 / area2;

    super_poder1 = populacao1 + pontos_turisticos1 + area1 + pib1 + densidade_populacional1 + pib_percapita1;
    super_poder2 = populacao2 + pontos_turisticos2 + area2 + pib2 + densidade_populacional2 + pib_percapita2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if (populacao1 > populacao2) {
        printf("Cidade %s [%s] tem maior população.\n", cidade1, codigo1);
    } else {
        printf("Cidade %s [%s] tem maior população.\n", cidade2, codigo2);
    }

    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Cidade %s [%s] tem mais pontos turisticos.\n", cidade1, codigo1);
    } else {
        printf("Cidade %s [%s] tem mais pontos turisticos.\n", cidade2, codigo2);
    }

    if (area1 > area2) {
        printf("Cidade %s [%s] tem a maior area.\n", cidade1, codigo1);
    } else {
        printf("Cidade %s [%s] tem a maior area.\n", cidade2, codigo2);
    }

    if (pib1 > pib2) {
        printf("Cidade %s [%s] tem o maior PIB.\n", cidade1, codigo1);
    } else {
        printf("Cidade %s [%s] tem o maior PIB.\n", cidade2, codigo2);
    }

    if (densidade_populacional1 < densidade_populacional2) {
        printf("Cidade %s [%s] tem a menor densidade populacional.\n", cidade1, codigo1);
    } else {
        printf("Cidade %s [%s] tem a menor densidade populacional.\n", cidade2, codigo2);
    }

    if (pib_percapita1 > pib_percapita2) {
        printf("Cidade %s [%s] tem o maior PIB per Capita.\n", cidade1, codigo1);
    } else {
        printf("Cidade %s [%s] tem o maior PIB per Capita.\n", cidade2, codigo2);
    }

    if (super_poder1 > super_poder2) {
        printf("Cidade %s [%s] tem o maior Super Poder.\n", cidade1, codigo1);
    } else {
        vencedora = 2;
        printf("Cidade %s [%s] tem o maior Super Poder.\n", cidade2, codigo2);
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    if (vencedora == 1) {
        printf("A cidade vencedora com maior Super Poder é: %s\n", cidade1);
    } else {
        printf("A cidade vencedora com maior Super Poder é: %s\n", cidade2);
    }

    return 0;
}
