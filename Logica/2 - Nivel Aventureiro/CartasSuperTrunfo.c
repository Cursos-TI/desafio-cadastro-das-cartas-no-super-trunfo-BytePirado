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
        int escolha, escolhafinal;
        float inverso_densidade1, inverso_densidade2;

        printf("Menu Principal\n");
        printf("1. Iniciar Jogo\n");
        printf("2. Ver Regras\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
        printf("======================================================================\n");
        printf("Iniciando armazenamendo da primeira carta\n");
        printf("======================================================================\n");
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

        printf("Qual o indice populacional?: ");
        scanf("%d", &pop2);

        printf("Qual a área desta cidade em Km²?: ");
        scanf("%f", &area2);

        printf("Qual o PIB dessa cidade?: ");
        scanf("%f", &pib2);

        printf("Tem quantos pontos turisticos?: \n");
        scanf("%d", &turismo2);

        printf("Escolha o atributo da carta:");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capta\n");
        printf("7. Super Poder\n");
        scanf("%d", &escolhafinal);
        break;
    
            switch (escolhafinal)
            {
            case 1:
                if (pop1 > pop2)
                {
                    printf("Você venceu, sua carta: População de %d e a carta adversária: população de %d", pop1, pop2);
                } else {
                    printf("Você perdeu, sua carta: População de %d e a carta adversária: população de %d", pop1, pop2);
                }
            case 2:
                if (area1 > area2)
                {
                    printf("Você venceu, sua carta: Área de %fKM² e a carta adversária: Área de %fKM²", area1, area2);
                } else {
                    printf("Você perdeu, sua carta: Área de %fKM² e a carta adversária: Área de %fKM²", area1, area2);
                }
                break;
            case 3:
                if (pib1 > pib2)
                {
                    printf("Você venceu, sua carta: PIB de %.1f bilhões e a carta adversária: PIB de %.1f bilhões", pib1, pib2);
                } else {
                    printf("Você perdeu, sua carta: PIB de %.1f bilhões e a carta adversária: PIB de %.1f bilhões", pib1, pib2);
                }
                break;
            case 4:
                if (turismo1 > turismo1)
            {
                    printf("Você venceu, sua carta: Pontos Turisticos de %d e a carta adversária: PIB de %d", turismo1, turismo2);
            }   else {
                    printf("Você perdeu, sua carta: Pontos Turisticos de %d e a carta adversária: PIB de %d", turismo1, turismo2);
            }
                break;
            case 5:
                if (densidade1 < densidade2)
            {
                    printf("Você venceu, sua carta: Densidade Populacional de %f e a carta adversária: Densidade Populacional de %f", densidade1, densidade2);
            }   else {
                    printf("Você perdeu, sua carta: Densidade Populacional de %f e a carta adversária: Densidade Populacional de %f", densidade1, densidade2);
            }
                break;
            case 6:
                if (pibpc1 > pibpc2)
            {
                    printf("Você venceu, sua carta: PIB Per Capta de %.2f bilhões e a carta adversária: PIB Per Capta de %.2f bilhões", pibpc1, pibpc2);
            }   else {
                    printf("Você perdeu, sua carta: PIB Per Capta de %.2f bilhões e a carta adversária: PIB Per Capta de %.2f bilhões", pibpc1, pibpc2);
            }
                break;
            case 7:
                if (super1 > super2)
            {
                    printf("Você venceu, sua carta: Super Poder de %.0f e a carta adversária: Super Poder de %.0f", super1, super2);
            }   else {
                    printf("Você perdeu, sua carta: Super Poder de %.0f e a carta adversária: Super Poder de %.0f", super1, super2);
            }
                break;
            default:
                printf("======Opção Inválida======");
                break;
            }
        printf("======================================================================\n");
        printf("Fim do jogo\n");
        printf("======================================================================\n");
            break;
        case 2:
            printf("======================================================================\n");
            printf("O jogador coloca as informações das cartas no programa.\n");
            printf("Em cada rodada, um jogador escolhe um atributo da sua carta para competir.\n");
            printf("Os outros jogadores comparam o mesmo atributo em suas cartas.\n");
            printf("Quem tiver o maior valor nesse atributo vence a rodada e recolhe as cartas jogadas.\n");
            printf("Em caso de empate, as cartas ficam acumuladas para a próxima rodada.\n");  
            printf("O jogo continua até que um jogador fique com todas as cartas ou um critério de vitória seja atingido.\n");
            printf("======================================================================\n");
            break;
        case 3:
            printf("======================================================================\n");
            printf("Saindo do jogo....\n");
            printf("======================================================================\n");
            break;
        default:
            printf("======================================================================\n");
            printf("Opção inválida\n");
            printf("======================================================================\n");
            break;
        }   

    //esta seção irá pegar as informações da primeira carta

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
       
        return 0;
    }
