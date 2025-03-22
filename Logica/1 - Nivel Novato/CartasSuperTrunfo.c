#include <stdio.h>

    int main(){

    //esta é a códigos da carta
        char estado1[50], estado2[50];
        char carta1[50], carta2[50];
        char cidade1[50], cidade2[50];
        float area1, pib1, area2, pib2;
        int turismo1, turismo2, pop1, pop2; //corrigido população que estava ausente no primeiro código
        float pibpc1, pibpc2, densidade1, densidade2;
        float super1, super2;
        int escolha;
        float inverso_densidade1, inverso_densidade2;

        printf("======================================================================\n");
        printf("Olá tudo bem? Vamos jogar Super trunfo?\n");
        printf("======================================================================\n");
        printf("Vou precisar de algumas informações das cidades escolhidas, vamos lá?\n");
        printf("======================================================================\n");

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
        printf("======================================================================\n");   
        printf("Perfeito, informações da primeira carta armazenada, agora vamos para segunda carta\n");
        printf("======================================================================\n");

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

    //Acrescentei o super poder
        
        inverso_densidade1 = 1 / densidade1;
        inverso_densidade2 = 1 / densidade2;
        super1 = pop1 + area1 + turismo1 + pibpc1 + inverso_densidade1;
        super2 = pop2 + area2 + turismo2 + pibpc2 + inverso_densidade2;

    //Aqui abaixo exibe as duas cartas: Estado, codigo, cidade, km, pib, turismo
        printf("======================================================================\n");
    
        printf("Carta 01:\n");
        printf("Primeira carta temos:\n");
        printf("Estado: %s\n", estado1);
        printf("Código da carta: %s\n", carta1);
        printf("Cidade: %s\n", cidade1);
        printf("Indice populacional: %d\n",pop1); //acrescentado, estava ausente no primeiro codigo
        printf("Possui área de %.0f Km²\n", area1);
        printf("PIB de: R$%.0f\n", pib1);
        printf("Pontos turísticos: %d\n", turismo1);
        printf("Densidade populacional: %.0f\n", densidade1);
        printf("PIB per capta: R$%.3f\n", pibpc1);
        printf("Super Poder: %.0f\n", super1);

        printf("======================================================================\n");

        printf("Carta 02:\n");
        printf("Segunda carta temos:\n");
        printf("Estado: %s\n", estado2);
        printf("Código da carta: %s\n", carta2);
        printf("Cidade: %s\n", cidade2);
        printf("Indice populacional: %d\n",pop2); //acrescentado, estava ausente no primeiro codigo
        printf("Possui área de %.0f Km²\n", area2);
        printf("PIB de: R$%.0f\n", pib2);
        printf("Pontos turísticos: %d\n", turismo2);
        printf("Densidade populacional: %.3f\n", densidade2);
        printf("PIB per capta: R$%.3f\n", pibpc2);
        printf("Super Poder: %.0f\n",super2);



    //pensei em colocar os vencedores, como não sei colocar a decisão, apenas coloquei um print+scan pra poder ficar bonitinho e parecido com escolha
    printf("======================================================================\n");
         /* ignorei essa parte e fiz uma nova
        printf("Escolha o atributo: ");
        scanf("%d", escolha);

        printf("Comparação das cartas:\n");

        printf("População: Carta %d venceu\n", (pop1 > pop2) ? 1 : 2);
        printf("Área: Carta %d venceu\n", (area1 > area2) ? 1 : 2);
        printf("PIB: Carta %d venceu\n", (pib1 > pib2) ? 1 : 2);
        printf("Pontos Turísticos: Carta %d venceu\n", (turismo1 > turismo2) ? 1 : 2);
        printf("Densidade Populacional: Carta %d venceu\n", (densidade1 > densidade2) ? 1 : 2);
        printf("PIB per Capita: Carta %d venceu\n", (pibpc1 > pibpc2) ? 1 : 2);
        printf("Super Poder: Carta %d venceu\n", (super1 > super2) ? 1 : 2); */

        printf("Comparação das cartas\n");
        printf("======================================================================\n");
        if (pop1 > pop2){
          printf("A cidade de %s venceu com população de: %d\n", cidade1, pop1);
        } else {
            printf("A cidade de %s venceu com população de: %d\n", cidade2, pop2);
        }

        if (area1 > area2){
            printf("A cidade de %s venceu área de: %.0fKm²\n", cidade1, area1);
        } else {
            printf("A cidade de %s venceu área de: %.0fKm²\n", cidade2, area2);
        }

        if (pib1 > pib2){
            printf("A cidade de %s venceu com pib de: R$%.0f\n", cidade1, pib1);
        } else {
            printf("A cidade de %s venceu com pib de: R$%.0f\n", cidade2, pib2);
        }

        if (turismo1 > turismo2){
            printf("A cidade de %s venceu com %d pontos turisticos\n", cidade1, turismo1);
        } else {
            printf("A cidade de %s venceu com %d pontos turisticos\n", cidade2, turismo2);
        }

        if (densidade1 < densidade2){
            printf("A cidade de %s venceu com densidade de: %.2f\n", cidade1, densidade1);
        } else {
            printf("A cidade de %s venceu com densidade de: %.2f\n", cidade2, densidade2);
        }

        if (pibpc1 > pibpc2){
            printf("A cidade de %s venceu com PIB per capta de: R$%.0f\n", cidade1, pibpc1);
        } else {
            printf("A cidade de %s venceu com PIB per capta de: R$%.0f\n", cidade2, pibpc2);
        }

        if (super1 > super2){
            printf("A cidade de %s venceu com o incrível super poder de %.0f pontos\n", cidade1, super1);
        } else {
            printf("A cidade de %s venceu com o incrível super poder de %.0f pontos\n", cidade2, super2);
        }
        

        printf("======================================================================\n");
        printf("Fim do jogo\n");
        printf("======================================================================\n");

        return 0;
    }
