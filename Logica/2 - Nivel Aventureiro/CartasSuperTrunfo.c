#include <stdio.h>

int main() {
    // Variáveis para as cartas
    char estado1[50], estado2[50];
    char carta1[50], carta2[50];
    char cidade1[50], cidade2[50];
    float area1, pib1, area2, pib2;
    int turismo1, turismo2, pop1, pop2;
    float densidade1, densidade2;
    float super1, super2;
    int escolha, escolhafinal;
    float inverso_densidade1, inverso_densidade2;
    float pibpc1, pibpc2;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    // Verifica se a escolha do menu principal é válida
    if (escolha < 1 || escolha > 3) {
        printf("======================================================================\n");
        printf("Opção inválida\n");
        printf("======================================================================\n");
    } else {
        switch (escolha) {
        case 1:
            printf("======================================================================\n");
            printf("Iniciando armazenamendo da primeira carta\n");
            printf("======================================================================\n");
            printf("Vamos começar com o primeiro Estado: ");
            scanf("%s", estado1);

            printf("Qual o código da primeira carta?: ");
            scanf("%s", carta1);

            printf("Qual a cidade desta carta?: ");
            scanf("%s", cidade1);

            printf("Qual o indice populacional?: ");
            scanf("%d", &pop1);

            printf("Qual a área desta cidade em Km²?: ");
            scanf("%f", &area1);

            printf("Qual o PIB dessa cidade?: ");
            scanf("%f", &pib1);

            printf("Tem quantos pontos turisticos?: ");
            scanf("%d", &turismo1);

            // Agora vamos para a segunda carta
            printf("======================================================================\n");
            printf("Perfeito, informações da primeira carta armazenada, agora vamos para segunda carta\n");
            printf("======================================================================\n");

            printf("Vamos começar com o segundo Estado: ");
            scanf("%s", estado2);

            printf("Qual o código da segunda carta?: ");
            scanf("%s", carta2);

            printf("Qual a cidade desta carta?: ");
            scanf("%s", cidade2);

            printf("Qual o indice populacional?: ");
            scanf("%d", &pop2);

            printf("Qual a área desta cidade em Km²?: ");
            scanf("%f", &area2);

            printf("Qual o PIB dessa cidade?: ");
            scanf("%f", &pib2);

            printf("Tem quantos pontos turisticos?: ");
            scanf("%d", &turismo2);
        densidade1 = pop1 / area1;
        densidade2 = pop2 / area2;
    
        pibpc1 = (pib1 * 1000000000) / (float)pop1;
        pibpc2 = (pib2 * 1000000000) / (float)pop2;
    
        inverso_densidade1 = 1 / densidade1;
        inverso_densidade2 = 1 / densidade2;
        super1 = pop1 + area1 + turismo1 + pibpc1 + inverso_densidade1;
        super2 = pop2 + area2 + turismo2 + pibpc2 + inverso_densidade2;

            /*printf("======================================================================\n");
            printf("Detalhes das cartas inseridas:\n");
            printf("======================================================================\n");

            printf("Carta 1:\n");
            printf("Estado: %s\n", estado1);
            printf("Código: %s\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d habitantes\n", pop1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: %.2f bilhões\n", pib1);
            printf("Pontos Turísticos: %d\n", turismo1);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
            printf("PIB per Capta: %.f bilhões\n", pibpc1);
            printf("Super Poder: %.2f\n", super1);
            printf("----------------------------------------------------------------------\n");

            printf("Carta 2:\n");
            printf("Estado: %s\n", estado2);
            printf("Código: %s\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %d habitantes\n", pop2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f bilhões\n", pib2);
            printf("Pontos Turísticos: %d\n", turismo2);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
            printf("PIB per Capta: %.2f bilhões\n", pibpc2);
            printf("Super Poder: %.2f\n", super2);
            printf("======================================================================\n");*/


            printf("======================================================================\n");
            printf("Escolha o atributo da carta:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per Capta\n");
            printf("7. Super Poder\n");
            printf("Carta Escolhida: ");
            scanf("%d", &escolhafinal);
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
            return 0; // Saída imediata do programa
            break;
            
        case 3:
            printf("======================================================================\n");
            printf("Saindo do jogo....\n");
            printf("======================================================================\n");
            return 0; // Saída imediata do programa
            break;

        default:
            // Este bloco nunca será executado por causa da verificação de opção inválida
            break;
        }




        // Só executa o código de comparação se a opção for 1 ou 2
        if (escolha == 1 || escolha == 2) {
            
            // Bloco para comparar as cartas com base na escolha final
            switch (escolhafinal) {
            case 1:
                if (pop1 > pop2) {
                    printf("Você venceu, sua carta: População de %d e a carta adversária: população de %d\n", pop1, pop2);
                } else {
                    printf("Você perdeu, sua carta: População de %d e a carta adversária: população de %d\n", pop1, pop2);
                }
                break;

            case 2:
                if (area1 > area2) {
                    printf("Você venceu, sua carta: Área de %.2fKM² e a carta adversária: Área de %.2fKM²\n", area1, area2);
                } else {
                    printf("Você perdeu, sua carta: Área de %.2fKM² e a carta adversária: Área de %.2fKM²\n", area1, area2);
                }
                break;

            case 3:
                if (pib1 > pib2) {
                    printf("Você venceu, sua carta: PIB de %.1f bilhões e a carta adversária: PIB de %.1f bilhões\n", pib1, pib2);
                } else {
                    printf("Você perdeu, sua carta: PIB de %.1f bilhões e a carta adversária: PIB de %.1f bilhões\n", pib1, pib2);
                }
                break;

            case 4:
                if (turismo1 > turismo2) {
                    printf("Você venceu, sua carta: Pontos Turisticos de %d e a carta adversária:  Pontos Turisticos de %d\n", turismo1, turismo2);
                } else {
                    printf("Você perdeu, sua carta: Pontos Turisticos de %d e a carta adversária:  Pontos Turisticos de %d\n", turismo1, turismo2);
                }
                break;

            case 5:
                if (densidade1 < densidade2) {
                    printf("Você venceu, sua carta: Densidade Populacional de %.2f e a carta adversária: Densidade Populacional de %.2f\n", densidade1, densidade2);
                } else {
                    printf("Você perdeu, sua carta: Densidade Populacional de %.2f e a carta adversária: Densidade Populacional de %.2f\n", densidade1, densidade2);
                }
                break;

            case 6:
                if (pibpc1 > pibpc2) {
                    printf("Você venceu, sua carta: PIB Per Capta de %.2f Reais e a carta adversária: PIB Per Capta de %.2f Reais\n", pibpc1, pibpc2);
                } else {
                    printf("Você perdeu, sua carta: PIB Per Capta de %.2f Reais e a carta adversária: PIB Per Capta de %.2f Reais\n", pibpc1, pibpc2);
                }
                break;

            case 7:
                if (super1 > super2) {
                    printf("Você venceu, sua carta: Super Poder de %.0f e a carta adversária: Super Poder de %.0f\n", super1, super2);
                } else {
                    printf("Você perdeu, sua carta: Super Poder de %.0f e a carta adversária: Super Poder de %.0f\n", super1, super2);
                }
                break;

            default:
                printf("======Opção Inválida======\n");
                break;
            }
        }

        printf("======================================================================\n");
        printf("Fim do jogo\n");
        printf("======================================================================\n");
    }

    return 0;
}
