#include <stdio.h>

    int main(){

    //esta é a códigos da carta
    char estado1[50], estado2[50];
    char carta1[50], carta2[50];
    char cidade1[50], cidade2[50];
    float area1, pib1, area2, pib2;
    int turismo1, turismo2, pop1, pop2; //corrigido população que estava ausente no primeiro código
    float pibpc1, pibpc2, densidade1, densidade2;

    printf("==================================================\n");
    printf("Olá tudo bem? Vamos jogar Super trunfo?\n");
    printf("Vou precisar de algumas informações das cidades escolhidas, vamos lá?\n");

    //esta seção irá pegar as informações da primeira carta
    printf("Vamos começar com o primeiro Estado: ");
    scanf("%s", &estado1 );
    
    printf("Qual o código da primeira carta?: ");
    scanf("%s", &carta1);
    
    printf("Qual a cidade desta carta?: ");
    scanf("%s", &cidade1);

    printf("Qual o indice populacional?: "); //acrescentado, estava ausente no primeiro codigo
    scanf("%d", &pop1);

    printf("Qual a área desta cidade em Km²?: ");
    scanf("%f", &area1);

    printf("Qual o PIB dessa cidade?: "); 
    scanf("%f", &pib1);

    printf("Tem quantos pontos turisticos?: ");
    scanf("%d", &turismo1);

    //agora decidi fazer a segunda carta, antes de mostrar o resultado
    printf("==================================================\n");   
    printf("Perfeito, informações da primeira carta armazenada, agora vamos para segunda carta\n");
    printf("==================================================\n");

    printf("Vamos começar com o segundo Estado: ");
    scanf("%s", &estado2 );
    
    printf("Qual o código da segunda carta?: ");
    scanf("%s", &carta2);
    
    printf("Qual a cidade desta carta?: ");
    scanf("%s", &cidade2);

    printf("Qual o indice populacional?: "); //acrescentado, estava ausente no primeiro codigo
    scanf("%d", &pop2);

    printf("Qual a área desta cidade em Km²?: ");
    scanf("%f", &area2);

    printf("Qual o PIB dessa cidade?: ");
    scanf("%f", &pib2);

    printf("Tem quantos pontos turisticos?: ");
    scanf("%d", &turismo2);

    //acrescentei o pib per capta e densidade

    densidade1 = pop1 / area1;
    densidade2 = pop2 / area2;

    pibpc1 = pib1 / pop1;
    pibpc2 = pib2 / pop2;

    //Aqui abaixo exibe as duas cartas: Estado, codigo, cidade, km, pib, turismo
    printf("==================================================\n");

    printf("Carta 01:\n");
    printf("Primeira carta temos:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("Indice populacional: %d\n",pop1); //acrescentado, estava ausente no primeiro codigo
    printf("Possui área de %f Km2\n", area1);
    printf("PIB de: %f\n", pib1);
    printf("Pontos turísticos: %d\n", turismo1);
    printf("Densidade populacional: %f\n", densidade1);
    printf("PIB per capta: %f\n", pibpc1);

    printf("==================================================\n");

    printf("Carta 02:\n");
    printf("Segunda carta temos:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Indice populacional: %d\n",pop2); //acrescentado, estava ausente no primeiro codigo
    printf("Possui área de %f Km2\n", area2);
    printf("PIB de: %f\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);
    printf("Densidade populacional: %f\n", densidade2);
    printf("PIB per capta: %f\n", pibpc2);
    
        return 0;
    }
