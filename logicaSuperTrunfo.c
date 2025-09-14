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
    int escolha, escolha2;
    int resultado1, resultado2;
    float v1_c1, v2_c1, v1_c2, v2_c2; // valor 1 da carta 1, valor 2 da carta 1 etc (usado pra soma no final)  
    float soma1, soma2; // soma dos atibutos escolhidos pelo usuário
    char *atributo = "", *atributo2 = "";
    
    //início do jogo
    printf("###SUPER TRUNFO###\n");
    //Início do preenchimento do usuário
    printf("Insira o estado da primeira carta (sigla): \n");
    scanf("%s", &estado); //espaço aplicado para não incorrer em erro por causa do \n anterior

    printf("Insira a sigla do estado seguida de um número de 01 a 09: \n"); // Esse é o código da carta
    scanf("%s", &codigo);

    printf("Insira o nome da cidade (sem espaços): \n");
    scanf("%s", &nome);

    printf("Insira a população da cidade: \n");
    scanf("%lu", &pop);

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
    scanf("%lu", &pop2);

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
    printf("População: %lu \n", pop);
    printf("Área: %.2f KM²\n", area); // Não utilizar "," na hora de preencher
    printf("PIB: R$ %.2f bi \n", pib / 1000000000);
    printf("Número de Pontos Turísticos: %d \n", ptur);
    printf("Densidade populacional: %.2f hab/km² \n", denpop1);
    printf("PIB per Capita: R$ %.2f \n", ppc1);
    superpoder1 = pop + area + pib + ptur + (1.0/denpop1) + ppc1;
    printf("Super Poder da carta 1 é: %.2f\n\n", superpoder1 );
    

    printf("Carta 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %lu \n", pop2);
    printf("Área: %.2f KM²\n", area2); // Não utilizar "," na hora de preencher
    printf("PIB: R$ %.2f bi\n", pib2 / 1000000000);
    printf("Número de Pontos Turísticos: %d \n", ptur2);
    printf("Densidade populacional: %.2f hab/km² \n", denpop2);
    printf("PIB per Capita: R$ %.2f  \n", ppc2);
    superpoder2 = pop2 + area2 + pib2 + ptur2 + (1.0/denpop2) + ppc2;
    printf("Super Poder da carta 2 é: %.2f\n\n", superpoder2);
    //Escolha da primeira comparação
    printf("Escolha a primeira comparação: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos \n");
    printf("5. Densidade Populacional\n");
    printf("Escolha: \n");

    scanf("%d", &escolha);
 
    
    
    switch (escolha)
    {
    case 1:
        atributo = "POPULAÇÃO";
        resultado1 = pop > pop2 ? 1 : 0;
        v1_c1 = pop;
        v1_c2 = pop2;
        break;
    case 2:
        atributo = "ÁREA";   
        resultado1 = area > area2 ? 1 : 0;
        v1_c1 = area;
        v1_c2 = area2;
        break;
    case 3:
        atributo = "PIB";
        resultado1 = pib > pib2 ? 1 : 0;
        v1_c1 = pib;
        v1_c2 = pib2;
        break;
    case 4:
        atributo = "PONTOS TURÍSTICOS";
        resultado1 = ptur > ptur2 ? 1 : 0;
        v1_c1 = ptur;
        v1_c2 = ptur2;
        break;    
    case 5:
        atributo = "DENSIDADE POPULACIONAL";  
        resultado1 = denpop1 < denpop2 ? 1: 0;
        v1_c1 = 1.0 / denpop1;
        v1_c2 = 1.0 / denpop2;
    break;
    default:
        printf("Opção inválida!\n");
        return 0;
    }
//fim escolha1
   
    printf("Escolha a segunda comparação: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos \n");
    printf("5. Densidade Populacional\n");
    
    printf("Escolha: \n");
    scanf("%d", &escolha2);

    if (escolha == escolha2){
        printf("Você escolheu o mesmo atributo!");
        return 0;
    } else {

    switch (escolha2)
    {
    case 1:
        atributo2 = "POPULAÇÃO";
        resultado2 = pop > pop2 ? 1 : 0;
        v2_c1 = pop;
        v2_c2 = pop2;
        break;
    case 2:
        atributo2 = "ÁREA";   
        resultado2 = area > area2 ? 1 : 0;
        v2_c1 = area;
        v2_c2 = area2;
        break;
    case 3:
        atributo2 = "PIB";
        resultado2 = pib > pib2 ? 1 : 0;
        v2_c1 = pib;
        v2_c2 = pib2;
        break;
    case 4:
        atributo2 = "PONTOS TURISTICOS";
        resultado2 = ptur > ptur2 ? 1 : 0;
        v2_c1 = ptur;
        v2_c2 = ptur2;
        break;    
    case 5:
        atributo2 = "DENSIDADE POPULACIONAL";  
        resultado2 = denpop1 < denpop2 ? 1: 0;
        v2_c1 = 1.0 / denpop1;
        v2_c2 = 1.0 / denpop2;
    break;
    default:
        printf("Opção inválida!\n");
        return 0;

    }
 }
    soma1 = v1_c1 + v2_c1;
    soma2 = v1_c2 + v2_c2;
    
    printf("###COMPARAÇÃO FINAL###\n");
    printf("Comparação entre %s e %s\n", nome, nome2);
    printf("%s escolheu:\n",nome);
    printf(" - %s: %.2f\n", atributo, v1_c1);
    printf(" - %s: %.2f\n", atributo, v2_c1);
    printf("Total é: %.2f\n", soma1);
    //segunda carta
    printf("%s escolheu:\n",nome2);
    printf(" - %s: %.2f\n", atributo2, v1_c2);
    printf(" - %s: %.2f\n", atributo2, v2_c2);
    printf("Total é: %.2f\n", soma2);

    if (soma1 == soma2){
        printf("EMPATE!");
    }else if (soma1 > soma2){
        printf("%s VENCEU!\n", nome);
    }else {
        printf("%s VENCEU!\n", nome2);
    }

    

    return 0;
}