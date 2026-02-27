#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão de utilitários
#include <string.h> // Inclui biblioteca de manipulação de strings

int main(){
    
    // Declaração de dados das Cartas
    char estado1 = 'A', 
         estado2 = 'B';
    char codigo1[5] = "A11", 
         codigo2[5] = "B21";
    char cidade1[50] = "São Paulo", 
         cidade2[50] = "Rio de Janeiro";
    unsigned long int populacao1 = 12000000, populacao2 = 6700000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 850000.00, pib2 = 850000.00;
    int pontosturisticos1 = 15, pontosturisticos2 = 15;
    float densidadepop1, densidadepop2;
    float pibpercapita1, pibpercapita2;
    int primeiroAtributo, segundoAtributo;
    float c1_atributo1, c1_atributo2, c2_atributo1, c2_atributo2;


    printf("===========================================\n");
    printf(" Bem-vindo ao jogo Super Trunfo de Cidades\n");
    printf("===========================================\n");

    printf("Comparação entre duas cartas pré-cadastradas.\n");
    printf("Cada carta representa uma cidade brasileira.\n");
    
    printf("\nREGRAS DO JOGO:\n");
    printf("- Duas cartas serão comparadas.\n");
    printf("- Você escolherá dois atributos diferentes.\n");
    printf("- Cada atributo gera um vencedor ou empate.\n");
    printf("- O vencedor final depende do resultado geral.\n");
    
    printf("\nPressione ENTER para visualizar as cartas...\n");
    getchar();


    // Cálculo das variáveis de Densidade Populacional e PIB per capita (Carta 1)
    densidadepop1 = (float) populacao1 / area1;
    pibpercapita1 = pib1 / (float) populacao1;

    // Cálculo das variáveis de Densidade Populacional e PIB per capita (Carta 2)
    densidadepop2 = (float) populacao2 / area2;
    pibpercapita2 = pib2 / (float) populacao2;

    // Cálculo da variável Inverso da Densidade Populacional e Super Poder
    float SuperPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1.0 / densidadepop1);
    float SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1.0 / densidadepop2); 
    // Inverso da densidade populacional para imprimir os valores na comparação
    float inversoDensidade1 = 1.0 / densidadepop1, 
          inversoDensidade2 = 1.0 / densidadepop2;

    printf("===========================================\n");
    printf("            -> MENU DE CARTAS <-            \n");
    printf("===========================================\n");


    // Exibição da carta 1
    printf("\n---> CARTA 1 <---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop1);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita1);


    // Exibição da carta 2
    printf("\n---> CARTA 2 <---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita2);

    char buffer[10];
    printf("\nPressione ENTER para prosseguir a comparação...\n");
    fgets(buffer, sizeof(buffer), stdin); // Espera o usuário digitar algo para continuar


    // Comparação entre apenas duas cartas, atributo por atributo (exceto estado, código e nome)
    printf("===========================================\n");
    printf("           COMPARAÇÃO DAS CARTAS         \n");
    printf("===========================================\n");

    // Menu de escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo:\n");
    printf("\n1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. Super Poder\n");
    printf("7. PIB per capita\n");
    printf("Sua opção: ");
    scanf("%d", &primeiroAtributo);


    switch (primeiroAtributo) {
        
        case 1:
        printf("\nCarta 1 (%lu) vs Carta 2 (%lu)\n", populacao1, populacao2);
        c1_atributo1 = populacao1;
        c2_atributo1 = populacao2;

         printf("%s\n",
        c1_atributo1 > c2_atributo1 ? "🏆 Carta 1 leva vantagem com a maior população!\n" :
        c1_atributo1 < c2_atributo1 ? "🏆 Carta 2 leva vantagem com a maior população!\n" : 
                                      "⚖️ Empate neste atributo. Nenhuma carta leva vantagem.\n");
        break;

        case 2:
        printf("\nCarta 1 (%.2f Km²) vs Carta 2 (%.2f Km²)\n", area1, area2);
        c1_atributo1 = area1;
        c2_atributo1 = area2;

        printf("%s\n",
        c1_atributo1 > c2_atributo1 ? "🏆 Carta 1 leva vantagem com a maior área!\n" :
        c1_atributo1 < c2_atributo1 ? "🏆 Carta 2 leva vantagem com a maior área!\n" : 
                                      "⚖️ Empate neste atributo. Nenhuma carta leva vantagem.\n");
        break;

        case 3:
        printf("\nCarta 1 (R$ %.2f) vs Carta 2 (R$ %.2f)\n", pib1, pib2);
        c1_atributo1 = pib1;
        c2_atributo1 = pib2;

        printf("%s\n",
        c1_atributo1 > c2_atributo1 ? "🏆 Carta 1 leva vantagem com o maior PIB!\n" :
        c1_atributo1 < c2_atributo1 ? "🏆 Carta 2 leva vantagem com a maior PIB!\n" : 
                                      "⚖️ Empate neste atributo. Nenhuma carta leva vantagem.\n");        
        break;

        case 4:
        printf("\nCarta 1 (%d) vs Carta 2 (%d)\n", pontosturisticos1, pontosturisticos2);
        c1_atributo1 = pontosturisticos1;
        c2_atributo1 = pontosturisticos2;
        
        printf("%s\n",
        c1_atributo1 > c2_atributo1 ? "🏆 Carta 1 leva vantagem em pontos turísticos!\n" : 
        c1_atributo1 < c2_atributo1 ? "🏆 Carta 2 leva vantagem em pontos turísticos!\n" :
                                      "⚖️ Empate neste atributo. Nenhuma carta leva vantagem.\n");
        break;
    
        case 5:
        // No atributo de densidade populacional, a carta com o menor valor ganha
        printf("\nCarta 1 (%.2f) vs Carta 2 (%.2f)\n", densidadepop1, densidadepop2);
        c1_atributo1 = 1.0 / densidadepop1;
        c2_atributo1 = 1.0 / densidadepop2;
        
        printf("%s\n",
        c1_atributo1 > c2_atributo1 ? "🏆 Carta 1 leva vantagem com a menor densidade populacional!\n" :
        c1_atributo1 < c2_atributo1 ? "🏆 Carta 2 leva vantagem com a menor densidade populacional!\n" : 
                                      "⚖️ Empate neste atributo. Nenhuma carta leva vantagem.\n");
        break;

        case 6:
        printf("\nCarta 1 (%.2f) vs Carta 2 (%.2f)\n", SuperPoder1, SuperPoder2);
        c1_atributo1 = SuperPoder1;
        c2_atributo1 = SuperPoder2;

        printf("%s\n",
        c1_atributo1 > c2_atributo1 ? "🏆 Carta 1 leva vantagem com o maior super poder\n!" :
        c1_atributo1 < c2_atributo1 ? "🏆 Carta 2 leva vantagem com o maior super poder!\n" : 
                                      "⚖️ Empate neste atributo. Nenhuma carta leva vantagem.\n");
        break;

        case 7:
        printf("\nCarta 1 (%.2f) vs Carta 2 (%.2f)\n", pibpercapita1, pibpercapita2);
        c1_atributo1 = pibpercapita1;
        c2_atributo1 = pibpercapita2;

         printf("%s\n",
        c1_atributo1 > c2_atributo1 ? "🏆 Carta 1 leva vantagem com o maior PIB per capita!\n" :
        c1_atributo1 < c2_atributo1 ? "🏆 Carta 2 leva vantagem com o maior PIB per capita!\n" : 
                                      "⚖️ Empate neste atributo. Nenhuma carta leva vantagem.\n");
        break;
        default: printf("Opção inválida.\n");
        return 0;
        }


    // Menu dinâmico de escolha do segundo atributo
                           printf("\nEscolha o segundo atributo:\n");
if (primeiroAtributo != 1) printf("1. População\n");
if (primeiroAtributo != 2) printf("2. Área\n");
if (primeiroAtributo != 3) printf("3. PIB\n");
if (primeiroAtributo != 4) printf("4. Pontos Turísticos\n");
if (primeiroAtributo != 5) printf("5. Densidade populacional\n");
if (primeiroAtributo != 6) printf("6. Super Poder\n");
if (primeiroAtributo != 7) printf("7. PIB per capita\n");
                           printf("Sua opção: ");
                           scanf("%d", &segundoAtributo);
    
    // Informa a escolha de atributos iguais e encerra o jogo
    if (segundoAtributo == primeiroAtributo) { printf("Você escolheu o mesmo atributo. Fim de jogo.\n"); 
        return 0;
    }
    
    switch (segundoAtributo) {
    
        case 1:
        printf("\nCarta 1 (%lu) vs Carta 2 (%lu)\n", populacao1, populacao2);
        c1_atributo2 = populacao1;
        c2_atributo2 = populacao2;

        printf("%s\n",
        c1_atributo2 > c2_atributo2 ? "🏆 Carta 1 leva vantagem com a maior população!\n" :
        c1_atributo2 < c2_atributo2 ? "🏆 Carta 2 leva vantagem com a maior população!\n" : 
                                      "⚖️ Empate neste atributo. Nenhuma carta leva vantagem.\n");
        break;
    
        case 2:
        printf("\nCarta 1 (%.2f Km²) vs Carta 2 (%.2f Km²)\n", area1, area2);
        c1_atributo2 = area1;
        c2_atributo2 = area2;

         printf("%s\n",
        c1_atributo2 > c2_atributo2 ? "🏆 Carta 1 leva vantagem com a maior área!\n" :
        c1_atributo2 < c2_atributo2 ? "🏆 Carta 2 leva vantagem com a maior área!\n" : 
                                      "⚖️ Empate neste atributo. Nenhuma carta leva vantagem.\n");
        break;
    
        case 3:
        printf("\nCarta 1 (R$ %.2f) vs Carta 2 (R$ %.2f)\n", pib1, pib2);
        c1_atributo2 = pib1;
        c2_atributo2 = pib2;

         printf("%s\n",
        c1_atributo2 > c2_atributo2 ? "🏆 Carta 1 leva vantagem com o maior PIB!\n" :
        c1_atributo2 < c2_atributo2 ? "🏆 Carta 2 leva vantagem com o maior PIB!\n" : 
                                      "⚖️ Empate neste atributo. Nenhuma carta leva vantagem.\n");
        break;
    
        case 4:
        printf("\nCarta 1 (%d) vs Carta 2 (%d)\n", pontosturisticos1, pontosturisticos2);
        c1_atributo2 = pontosturisticos1;
        c2_atributo2 = pontosturisticos2;

         printf("%s\n",
        c1_atributo2 > c2_atributo2 ? "🏆 Carta 1 leva vantagem em pontos turísticos!\n" :
        c1_atributo2 < c2_atributo2 ? "🏆 Carta 2 leva vantagem em pontos turísticos!\n" : 
                                      "⚖️ Empate neste atributo. Nenhuma carta leva vantagem.\n");
        break;
    
        case 5:
        printf("\nCarta 1 (%.2f) vs Carta 2 (%.2f)\n", densidadepop1, densidadepop2);
        c1_atributo2 = 1.0 / densidadepop1;
        c2_atributo2 = 1.0 / densidadepop2;

        printf("%s\n",
        c1_atributo2 > c2_atributo2 ? "🏆 Carta 1 leva vantagem com a menor densidade populacional!\n" :
        c1_atributo2 < c2_atributo2 ? "🏆 Carta 2 leva vantagem com a menor densidade populacional!\n" : 
                                      "⚖️ Empate neste atributo. Nenhuma carta leva vantagem.\n");
        break;
    
        case 6:
        printf("\nCarta 1 (%.2f) vs Carta 2 (%.2f)\n", SuperPoder1, SuperPoder2);
        c1_atributo2 = SuperPoder1;
        c2_atributo2 = SuperPoder2;

        printf("%s\n",
        c1_atributo2 > c2_atributo2 ? "🏆 Carta 1 leva vantagem com o maior super poder!\n" :
        c1_atributo2 < c2_atributo2 ? "🏆 Carta 2 leva vantagem com o maior super poder!\n" : 
                                      "⚖️ Empate neste atributo. Nenhuma carta leva vantagem.\n");
        break;
        
        case 7:
        printf("\nCarta 1 (%.2f) vs Carta 2 (%.2f)\n", pibpercapita1, pibpercapita2);
        c1_atributo2 = pibpercapita1;
        c2_atributo2 = pibpercapita2;

        printf("%s\n",
        c1_atributo2 > c2_atributo2 ? "🏆 Carta 1 leva vantagem com o maior PIB per capita!\n" :
        c1_atributo2 < c2_atributo2 ? "🏆 Carta 2 leva vantagem com o maior PIB per capita!\n" : 
                                      "⚖️ Empate neste atributo. Nenhuma carta leva vantagem.\n");
        break;
        
        default: printf("Opção inválida.\n");
        return 0;
        }  
           
    float somaCarta1 = c1_atributo1 + c1_atributo2,
          somaCarta2 = c2_atributo1 + c2_atributo2;
    
        printf("\n===========================================\n");
        printf("              RESULTADO FINAL              \n");
        printf("===========================================\n");

        printf("%s vs %s\n", cidade1, cidade2);

        printf("Primeiro Atributo - Carta 1: %.2f | Carta 2: %.2f\n", c1_atributo1, c2_atributo1);
        printf("Segundo Atributo - Carta 1: %.2f | Carta 2: %.2f\n", c1_atributo2, c2_atributo2);
        printf("\n📊 Pontuação Geral:\n");
        printf("- %s: %.2f\n", cidade1, somaCarta1);
        printf("- %s: %.2f\n", cidade2, somaCarta2);

        if (somaCarta1 > somaCarta2) {
           printf("\n🏆 %s venceu com o melhor desempenho na soma dos atributos!\n", cidade1);
        } else if (somaCarta1 < somaCarta2) {
           printf("\n🏆 %s venceu com o melhor desempenho na soma dos atributos!\n", cidade2);
        } else {
            printf("\nEmpate! %s e %s tiveram desempenho equivalente.\n", cidade1, cidade2);
        }

    return 0;
}