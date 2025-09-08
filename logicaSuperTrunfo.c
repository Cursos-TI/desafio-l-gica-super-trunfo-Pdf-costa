#include <stdio.h>

int main() {
    char estado[5], estado2[5]; //nome de uma letra do estado
    char codigo[5], codigo2[5]; //código de três letras da cidade
    char nome[20], nome2[20]; //nome da cidade
    unsigned long int pop, pop2; //população da cidade
    float area, area2; //área total da cidade
    float pib, pib2; //PIB da cidade
    int ptur, ptur2; //pontos turísticos
    float denpop1, denpop2; // Densidade populacional
    float ppc1, ppc2; // Pib per Capita
    float superpoder1, superpoder2; //Super Poder = somatório dos valores (inverso da densidade)
    int rPop, rArea, rPIB, rPtur, rDenPop, rPpc, rSuper;
    //Início do preenchimento do usuário
    printf("Insira o estado da primeira carta (sigla): \n");
    scanf("%s", &estado); //espaço aplicado para não incorrer em erro por causa do \n anterior

    printf("Insira a sigla do estado seguida de um número de 01 a 09: \n"); // Esse é o código da carta
    scanf("%s", &codigo);

    printf("Insira o nome da cidade (sem espaços): \n");
    scanf("%s", &nome);

    printf("Insira a população da cidade: \n");
    scanf("%u", &pop);

    printf("Insira a área da cidade (em Km²): \n"); // Não utilizar "," na hora de preencher
    scanf("%f", &area);

    printf("Insira o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &pib);
    pib = pib * 1000000000;

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &ptur);

    denpop1 = (float)pop / area;
    ppc1 = (float)pib / pop;
    //Fim da primeira carta
    
    //Início da segunda carta
    printf("Insira o estado da segunda carta (sigla): \n");
    scanf("%s", &estado2);

    printf("Insira a sigla do estado seguida de um número de 01 a 09: \n");
    scanf("%s", &codigo2);

    printf("Insira o nome da cidade (sem espaços): \n");
    scanf("%s", &nome2);

    printf("Insira a população da cidade: \n");
    scanf("%u", &pop2);

    printf("Insira a área da cidade (em Km²): \n"); // Não utilizar "," na hora de preencher
    scanf("%f", &area2);

    printf("Insira o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &pib2);
    pib2 = pib2 * 1000000000;

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &ptur2);

    denpop2 = (float)pop2 / area2;
    ppc2 = (float)pib2 / pop2;
    //fim da carta 2

    
    printf("\n Carta 1 \n"); // espaço antes para separar da inserção de dados
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("População: %u \n", pop);
    printf("Área: %.2f KM²\n", area); // Não utilizar "," na hora de preencher
    printf("PIB: R$ %.2f bi \n", pib / 1000000000);
    printf("Número de Pontos Turísticos: %d \n", ptur);
    printf("Densidade populacional: %.2f hab/km² \n", denpop1);
    printf("PIB per Capita: %.2f reais \n", ppc1);
    printf("Super Poder da carta 1 é: %.2f\n\n", pop + area + pib + ptur + (1/denpop1) + ppc1 );
    

    printf("Carta 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %u \n", pop2);
    printf("Área: %.2f KM²\n", area2); // Não utilizar "," na hora de preencher
    printf("PIB: R$ %.2f bi\n", pib2 / 1000000000);
    printf("Número de Pontos Turísticos: %d \n", ptur2);
    printf("Densidade populacional: %.2f hab/km² \n", denpop2);
    printf("PIB per Capita: %.2f reais \n", ppc2);
    printf("Super Poder da carta 2 é: %.2f\n\n", pop2 + area2 + pib2 + ptur2 + (1/denpop2) + ppc2 );

    /*Comparações entre as cartas
    rPop = pop > pop2;
    rArea = area > area2;
    rPIB = pib > pib2;
    rPtur = ptur > ptur2;
    rDenPop = denpop1 < denpop2;
    rPpc = ppc1 > ppc2;
    rSuper = superpoder1 > superpoder2;
    
    //resultado
    printf("Se o valor for 1 a carta 1 vence, se for 0, a carta 2 vence\n");
    printf("População: Vencedor é (%d)\n", rPop);
    printf("Area: Vencedor é (%d)\n,", rArea);
    printf("PIB: Vencedor é (%d)\n,", rPIB);
    printf("Pontos Turísticos: Vencedor é (%d)\n,", rPtur);
    printf("PIB per capita: Vencedor é (%d)\n,", rPpc);
    printf("Super Poder: Vencedor é (%d)\n,", rSuper);
    */
    printf("COMPARAÇÃO DE CARTAS (ATRIBUTO: POPULAÇÃO):\n");
    printf("Carta 1 - %s (%s): %u\n", nome, estado, pop);
    printf("Carta 2 - %s (%s): %u\n", nome2, estado2, pop2);
    if (pop > pop2){
        printf("Carta 1 (%s) venceu!",nome);
    } else {
        printf("Carta 2 (%s) venceu!", nome2);
    }
    return 0;
}