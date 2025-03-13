#include <stdio.h>

    int main(){

//Pelo amor, que código gigante kk

    //esta é a priemira carta
    char estado1[50];
    char carta1[50];
    char cidade1[50];
    float area1;
    float pib1;
    int turismo1;

    //esta é a segunda carta
    char estado2[50];
    char carta2[50];
    char cidade2[50];
    float area2;
    float pib2;
    int turismo2;

    printf("==================================================\n");
    printf("Olá tudo bem? Vamos jogar Super trunfo?\n");
    printf("Vou precisar de algumas informações das cidades escolhidas, vamos lá?\n");

    //esta seção irá pegar as informações da primeira carta
    printf("Vamos começar com o primeiro Estado: "); //POR QUE NÃO ESTA FICANDO TUDO JUNTO? TIREI O \N TO MALUCO
    scanf("%s", &estado1 );
    
    printf("Qual o código da primeira carta?: ");
    scanf("%s", &carta1);
    
    printf("Qual a cidade desta carta?: ");
    scanf("%s", &cidade1);

    printf("Qual a área desta cidade em Km²?: ");
    scanf("%f", &area1);

    printf("Qual o PIB dessa cidade?: "); 
    scanf("%f", &pib1);

    printf("Tem quantos pontos turisticos?: ");
    scanf("%d", &turismo1);

    //agora decidi fazer a segunda carta, antes de mostrar o resultado

    printf("Perfeito, informações da primeira carta armazenada, agora vamos para segunda carta\n");
    printf("==================================================\n");

    printf("Vamos começar com o segundo Estado: ");
    scanf("%s", &estado2 );
    
    printf("Qual o código da segunda carta?: ");
    scanf("%s", &carta2);
    
    printf("Qual a cidade desta carta?: ");
    scanf("%s", &cidade2);

    printf("Qual a área desta cidade em Km²?: ");
    scanf("%f", &area2);

    printf("Qual o PIB dessa cidade?: ");
    scanf("%f", &pib2);

    printf("Tem quantos pontos turisticos?: ");
    scanf("%d", &turismo2);
    
    /*tentei usar isso pra testes, mas falhei miseravelmente: printf("%s %s %s %f", estado1, carta1, cidade1, area1);

    Aqui abaixo exibe as duas cartas: Estado, codigo, cidade, km, pib, turismo*/
    printf("==================================================\n");

    printf("Carta 01:\n");
    printf("Primeira carta temos:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("Possui área de %f Km2\n", area1);
    printf("PIB de: %f\n", pib1);
    printf("Pontos turísticos: %d\n", turismo1);

    printf("==================================================\n");

    printf("Carta 02:\n");
    printf("Segunda carta temos:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Possui área de %f Km2\n", area2);
    printf("PIB de: %f\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);

        return 0;
    }
