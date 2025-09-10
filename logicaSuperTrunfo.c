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
    int escolha;
    
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

    printf("Escolha o que comparar: \n");
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
        printf("COMPARAÇÃO DE CARTAS (ATRIBUTO: POPULAÇÃO):\n");
        printf("Carta 1 - %s (%s): %lu HABITANTES\n", nome, estado, pop);
        printf("Carta 2 - %s (%s): %lu HABITANTES\n", nome2, estado2, pop2);
            if (pop == pop2){
            printf("***EMPATE***");
        } else if(pop > pop2){
            printf("Carta 1 (%s) venceu!\n", nome);
        }else{
            printf("Carta 2 (%s) venceu!\n", nome2);
        }
    break;
    case 2:
        printf("COMPARAÇÃO DE CARTAS (ATRIBUTO: ÁREA):\n");   
        printf("Carta 1 - %s (%s): %.2f KM²\n", nome, estado, area);
        printf("Carta 2 - %s (%s): %.2f KM²\n", nome2, estado2, area2);
            if (area == area2){
            printf("***EMPATE***");
        } else if(area > area2){
            printf("Carta 1 (%s) venceu!\n", nome);
        }else{
            printf("Carta 2 (%s) venceu!\n", nome2);
        }
    break;
    case 3:
        printf("COMPARAÇÃO DE CARTAS (ATRIBUTO: PIB):\n");
        printf("Carta 1 - %s (%s): R$%.2f\n", nome, estado, pib);
        printf("Carta 2 - %s (%s): R$%.2f\n", nome2, estado2, pib2);
            if (pib == pib2){
            printf("***EMPATE***");
        } else if(pib > pib2){
            printf("Carta 1 (%s) venceu!\n", nome);
        }else{
            printf("Carta 2 (%s) venceu!\n", nome2);
        }
    break;
    case 4:
        printf("COMPARAÇÃO DE CARTAS (ATRIBUTO: NÚMERO DE PONTOS TURÍSTICOS):\n");
        
    
        printf("Carta 1 - %s (%s): %d PONTOS TURÍSTICOS\n", nome, estado, ptur);
        printf("Carta 2 - %s (%s): %d PONTOS TURÍSTICOS\n", nome2, estado2, ptur2);
            if (ptur == ptur2){
            printf("***EMPATE***");
        } else if(ptur > ptur2){
            printf("Carta 1 (%s) venceu!\n", nome);
        }else{
            printf("Carta 2 (%s) venceu!\n", nome2);
        }
    break;    
    case 5:
        printf("COMPARAÇÃO DE CARTAS (ATRIBUTO: DENSIDADE POPULACIONAL):\n");  
        printf("Carta 1 - %s (%s): %.2f HAB/KM²\n", nome, estado, denpop1);
        printf("Carta 2 - %s (%s): %.2f HAB/KM²\n", nome2, estado2, denpop2);
            if (denpop1 == denpop2){
            printf("***EMPATE***");
        } else if(denpop1 < denpop2){
            printf("Carta 1 (%s) venceu!\n", nome);
        }else{
            printf("Carta 2 (%s) venceu!\n", nome2);
        }
    break;
    default:
        printf("Opção inválida!\n");
        return 0;
    }

    
            
    
   

   

   

       

    return 0;
}