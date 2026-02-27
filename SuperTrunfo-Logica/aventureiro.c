#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão de utilitários

int main(){
    
    // Declaração de dados das Cartas
    
    char estado1, estado2;
    char codigo1[5], codigo2[5]; //3 caracteres + '\0'
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepop1, densidadepop2;
    float pibpercapita1, pibpercapita2;
    int escolha;


    printf("===========================================\n");
    printf(" Bem-vindo ao jogo Super Trunfo de Cidades\n");
    printf("===========================================\n");
    printf("\nPara começar, preencha os dados da Carta 1.\n");


    //Leitura dos dados da Carta 1
    printf("Estado: ");
    scanf(" %c", &estado1);  //lê um caractere
    printf("Código: ");
    scanf(" %4s", codigo1);  //lê a string do código
    
    getchar(); //Limpa o buffer
    
    printf("Cidade: ");
    fgets(cidade1, 50, stdin);
    printf("População: ");
    scanf(" %lu", &populacao1);
    printf("Área (Km²): ");
    scanf(" %f", &area1);
    printf("PIB: ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos1);

    // Cálculo das variáveis de Densidade Populacional e PIB per capita (Carta 1)
    densidadepop1 = (float) populacao1 / area1;
    pibpercapita1 = pib1 / (float) populacao1;
    

    printf("\nPreencha os dados da Carta 2.\n");
    
    //Leitura dos dados da Carta 2
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf(" %4s", codigo2);

    getchar(); //Limpa o buffer

    printf("Cidade: ");
    fgets(cidade2, 50, stdin);
    printf("População: ");
    scanf(" %lu", &populacao2);
    printf("Área (Km²): ");
    scanf(" %f", &area2);
    printf("PIB: ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos2);
   

    //Cálculo das variáveis de Densidade Populacional e PIB per capita (Carta 2)
    densidadepop2 = (float) populacao2 / area2;
    pibpercapita2 = pib2 / (float) populacao2;

    //Cálculo da variável Inverso da Densidade Populacional e Super Poder abaixo
    float inversoDensidadePop1 = 1.0 / densidadepop1;
    float inversoDensidadePop2 = 1.0 / densidadepop2;
    float SuperPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + inversoDensidadePop1 + pibpercapita1;
    float SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + inversoDensidadePop2 + pibpercapita2; 


    printf("\n===========================================\n");
    printf(" SUAS CARTAS FORAM CADASTRADAS COM SUCESSO!\n");
    printf("===========================================\n");


    //exibição da carta 1
    printf("\n---> CARTA 1 <---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop1);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita1);

    //exibição da carta 2
    printf("\n---> CARTA 2 <---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita2);

    char buffer[10];
    getchar(); //consome o '\n' do último scanf
   
    printf("\nDigite qualquer tecla para prosseguir à comparação...\n");
    fgets(buffer, sizeof(buffer), stdin); // Espera o usuário digitar algo para continuar
    

    // Comparar duas cartas atributo por atributo (exceto estado, código e nome)
    printf("===========================================\n");
    printf("           COMPARAÇÃO DAS CARTAS         \n");
    printf("===========================================\n");
    printf("\nEscolha o atributo que deseja comparar:\n");
    printf("\n1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. Super Poder\n");
    printf("7. PIB per capita\n");
    printf("Sua opção: ");
    scanf("%d", &escolha);


    switch (escolha) {
    case 1:
        printf("\nCarta 1 (%lu) vs Carta 2 (%lu)\n", populacao1, populacao2);
        if (populacao1 > populacao2) {
            printf("Carta 1 venceu, com a maior população!\n");
        } else if (populacao1 < populacao2) {
            printf("Carta 2 venceu, com a maior população!\n");
        } else {
            printf("Empate! Ambas as cartas têm a mesma população.\n");
        }
        break;
    case 2:
        printf("\nCarta 1 (%.2f Km²) vs Carta 2 (%.2f Km²)\n", area1, area2);
        if (area1 > area2) {
            printf("Carta 1 venceu, com a maior área!\n");
        } else if (area1 < area2) {
            printf("Carta 2 venceu, com a maior área!\n");
        } else {
            printf("Empate! Ambas as cartas têm a mesma área.\n");
        }
        break;
    case 3:
        printf("\nCarta 1 (R$ %.2f) vs Carta 2 (R$ %.2f)\n", pib1, pib2);
        if (pib1 > pib2) {
            printf("Carta 1 venceu, com o maior PIB!\n");
        } else if (pib1 < pib2) {
            printf("Carta 2 venceu, com o maior PIB!\n");
        } else {
            printf("Empate! Ambas as cartas têm o mesmo PIB.\n");
        }
        break;
    case 4:
        printf("\nCarta 1 (%d) vs Carta 2 (%d)\n", pontosturisticos1, pontosturisticos2);
        if (pontosturisticos1 > pontosturisticos2) {
            printf("Carta 1 venceu, com mais pontos turísticos!\n");
        } else if (pontosturisticos1 < pontosturisticos2) {
            printf("Carta 2 venceu, com mais pontos turísticos!\n");
        } else {
            printf("Empate! Ambas as cartas têm a mesma quantidade de pontos turísticos.\n");
        }
        break;
    case 5:
        printf("\nCarta 1 (%.2f) vs Carta 2 (%.2f)\n", densidadepop1, densidadepop2);
        if (densidadepop1 < densidadepop2) {
        printf("Carta 1 venceu, com a menor densidade populacional!\n");
        } else if (densidadepop1 > densidadepop2) {
            printf("Carta 2 venceu, com a menor densidade populacional!\n");
        } else {
            printf("Empate! Ambas as cartas têm a mesma densidade populacional.\n");
        }
        break;
    case 6:
        printf("\nCarta 1 (%.2f) vs Carta 2 (%.2f)\n", SuperPoder1, SuperPoder2);
        if (SuperPoder1 > SuperPoder2) {
            printf("Carta 1 venceu, com o maior super poder!\n");
        } else if (SuperPoder1 < SuperPoder2) {
            printf("Carta 2 venceu, com o maior super poder!\n");
        } else {
            printf("Empate! Ambas as cartas têm o mesmo super poder.\n");
        }
        break;
    case 7:
        printf("\nCarta 1 (%.2f) vs Carta 2 (%.2f)\n", pibpercapita1, pibpercapita2);
        if (pibpercapita1 > pibpercapita2) {
            printf("Carta 1 venceu, com o maior PIB per capita!\n");
        } else if (pibpercapita1 < pibpercapita2) {
            printf("Carta 2 venceu, com o maior PIB per capita!\n");
        } else {
            printf("Empate! Ambas as cartas têm o mesmo PIB per capita.\n");
        }
        break;
        default:
            printf("Opção inválida.\n");
        }

    return 0;
    }