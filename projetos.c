#include <stdio.h>

int main() {
    printf("DESAFIO SUPER TRUNFO\n");

    char ESTADO1[3], ESTADO2[3];  
    char CODIGO1[10], CODIGO2[10];   
    char CIDADE1[50], CIDADE2[50];   
    int POPULACAO1, POPULACAO2;
    float AREA1, AREA2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIBPerCapita1, PIBPerCapita2;
    int pontosJogador1 = 0, pontosJogador2 = 0;

    //  jogador 1
    printf("Jogador 1 - Escolha um ESTADO (sigla ex: SP, RJ, MG):\n");
    scanf("%2s", ESTADO1);

    printf("Digite o CODIGO:\n");
    scanf("%9s", CODIGO1);
    
    printf("Escolha uma CIDADE:\n");
    scanf("%49s", CIDADE1); 

    printf("Digite a POPULACAO:\n");
    scanf("%d", &POPULACAO1);

    printf("Digite a AREA (em km²):\n");
    scanf("%f", &AREA1);
    
    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &PIB1);
    
    printf("Número de PONTOS TURÍSTICOS:\n");
    scanf("%d", &PontosTuristicos1);

    //jogador 2
    printf("Jogador 2 - Escolha um ESTADO (sigla ex: SP, RJ, MG):\n");
    scanf("%2s", ESTADO2);

    printf("Digite o CODIGO:\n");
    scanf("%9s", CODIGO2);
    
    printf("Escolha uma CIDADE:\n");
    scanf("%49s", CIDADE2); 

    printf("Digite a POPULACAO:\n");
    scanf("%d", &POPULACAO2);

    printf("Digite a AREA (em km²):\n");
    scanf("%f", &AREA2);
    
    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &PIB2);
    
    printf("Número de PONTOS TURÍSTICOS:\n");
    scanf("%d", &PontosTuristicos2);

    
    DensidadePopulacional1 = POPULACAO1 / AREA1;
    PIBPerCapita1 = PIB1 * 1000000000 / POPULACAO1;

    DensidadePopulacional2 = POPULACAO2 / AREA2;
    PIBPerCapita2 = PIB2 * 1000000000 / POPULACAO2;

    
    printf("\nRESULTADO DA COMPARAÇÃO:\n");
    printf("%s vs %s\n", CIDADE1, CIDADE2);

    if (POPULACAO1 > POPULACAO2) pontosJogador1++; else pontosJogador2++;
    if (AREA1 > AREA2) pontosJogador1++; else pontosJogador2++;
    if (PIB1 > PIB2) pontosJogador1++; else pontosJogador2++;
    if (PontosTuristicos1 > PontosTuristicos2) pontosJogador1++; else pontosJogador2++;
    if (DensidadePopulacional1 > DensidadePopulacional2) pontosJogador1++; else pontosJogador2++;
    if (PIBPerCapita1 > PIBPerCapita2) pontosJogador1++; else pontosJogador2++;

    printf("\nPLACAR FINAL:\n");
    printf("Jogador 1 (%s): %d pontos\n", CIDADE1, pontosJogador1);
    printf("Jogador 2 (%s): %d pontos\n", CIDADE2, pontosJogador2);

    if (pontosJogador1 > pontosJogador2) {
        printf("\nJogador 1 venceu com a cidade %s!\n", CIDADE1);
    } else if (pontosJogador2 > pontosJogador1) {
        printf("\nJogador 2 venceu com a cidade %s!\n", CIDADE2);
    } else {
        printf("\nO jogo terminou empatado!\n");
    }

    return 0;
}