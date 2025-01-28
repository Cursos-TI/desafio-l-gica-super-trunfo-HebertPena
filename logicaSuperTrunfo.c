#include <stdio.h>
//declaração de funções
void get_info(void);
void print_results(void);
void print_winner(void);

// Declaração das variáveis
char nome[20], nome2[20], codigo[5], codigo2[5], estado[20], estado2[20];
int populacao, populacao2, p_turisticos, p_turisticos2;
float area, area2, pib, pib2, densidade_pop, densidade_pop2, pib_c, pib_c2;

int main() {
    int menu = 3;
    printf("*** SUPER TRUNFO ***\n**ESCOLHA SUA OPÇÃO DE 1 A 3**\n1 - JOGAR\n2 - REGRAS\n3 - SAIR\n");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:

        get_info();
        densidade_pop = (populacao / area);
        densidade_pop2 = (populacao2 / area2);
        pib_c = (pib / populacao);
        pib_c2 = (pib2 / populacao2);
        print_results();
        print_winner(); 
        break;
    
    case 2:
        
        printf("\n* INSIRA AS INFORMAÇÕES DA CARTA\n* ESCOLHA 2 ATRIBUTOS PARA A BATALHA\n\n");

        break;

    case 3:
        printf("*** SAINDO DO JOGO ***\n\n");

        break;

    default:
        printf("OPÇÃO INVÁLIDA\n\n");

        break;
    }

    return 0;
}

// Cadastro das Cartas
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
void get_info() {
    printf("CIDADE Nº1\n");
    printf("Digite a sigla do estado da cidade Nº1: \n");
    scanf("%s", &estado[0]);
    printf("Digite o nome da cidade Nº1: \n");
    scanf("%s", &nome[0]);
    printf("Digite o código da cidade Nº1: \n");
    scanf("%s", &codigo[0]);
    printf("Digite a população da cidade Nº1: \n");
    scanf("%d", &populacao);
    printf("Digite o número de pontos turisticos da cidade Nº1: \n");
    scanf("%d", &p_turisticos);
    printf("Digite a área da cidade Nº1: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade Nº1: \n");
    scanf("%f", &pib);

    printf("CADASTRO DA CIDADE 1 CONCLUIDO\n\n");

    printf("CIDADE Nº2\n");
    printf("Digite a sigla do estado da cidade Nº2: \n");
    scanf("%s", &estado2[0]);
    printf("Digite o nome da cidade Nº2: \n");
    scanf("%s", &nome2[0]);
    printf("Digite o código da cidade Nº2: \n");
    scanf("%s", &codigo2[0]);
    printf("Digite a população da cidade Nº2: \n");
    scanf("%d", &populacao2);
    printf("Digite o número de pontos turisticos da cidade Nº2: \n");
    scanf("%d", &p_turisticos2);
    printf("Digite a área da cidade Nº2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade Nº2: \n");
    scanf("%f", &pib2);

    printf("CADASTRO DA CIDADE 2 CONCLUIDO\n\n");
}

//Função para imprimir valores, primeiro e ultimo printf com linhas extras por estética
void print_results() {
    printf("\n\n\n\n");
    printf("Carta 1: ESTADO: %s, CIDADE: %s, CÓDIGO: %s, POPULAÇÃO: %d, PONTOS TURISTICOS: %d, ÁREA: %.2f, PIB: %.2f, DENSIDADE POPULACIONAL: %.2f, PIB PER CAPITA: %.2f\n",
    estado, nome, codigo, populacao, p_turisticos, area, pib, densidade_pop, pib_c);
    printf("Carta 2: ESTADO: %s, CIDADE: %s, CÓDIGO: %s, POPULAÇÃO: %d, PONTOS TURISTICOS: %d, ÁREA: %.2f, PIB: %.2f, DENSIDADE POPULACIONAL: %.2f, PIB PER CAPITA: %.2f\n\n",
    estado2, nome2, codigo2, populacao2, p_turisticos2, area2, pib2, densidade_pop2, pib_c2);

}

void print_winner() {
    int menu = 6;
    int menu2 = 6;
    int carta1 = 0;
    int carta2 = 0;
    printf("** ESCOLHA 2 ATRIBUTOS PARA A BATALHA **\n");
    printf("** DIGITE 1 NÚMERO DÊ ENTER, DIGITE O SEGUNDO NUMERO E DÊ ENTER NOVAMENTE **\n");
    printf("1 - POPULAÇÃO\n2 - PONTOS TURISTICOS\n3 - ÁREA\n4 - PIB\n5 - DENSIDADE POPULACIONAL\n6 - PIB PER CAPITA\n");
    scanf("%d", &menu);
    scanf("%d", &menu2);
    printf("\n");

    switch (menu)
    {
    case 1:
        (populacao > populacao2) ? (printf("%s vence no atributo de população.\n\n", nome), carta1++) : (printf("%s vence no atributo de população.\n\n", nome2), carta2++); 
        
        break;

    case 2:

        (p_turisticos > p_turisticos2) ? (printf("%s vence no atributo de pontos turisticos.\n\n", nome), carta1++) : 
        (printf("%s vence no atributo de pontos turisticos.\n\n", nome2), carta2++);
        
        break;

    case 3:

        (area > area2) ? (printf("%s vence no atributo de Área.\n\n", nome), carta1++) : (printf("%s vence no atributo de Área.\n\n", nome2), carta2++);

        break;

    case 4:

        (pib > pib2) ? (printf("%s vence no atributo de PIB.\n\n", nome), carta1++) : (printf("%s vence no atributo de PIB.\n\n", nome2), carta2++);

        break;

    case 5:

        (densidade_pop < densidade_pop2) ? (printf("%s vence no atributo de densidade populacional.\n\n", nome), carta1++) : 
        (printf("%s vence no atributo de densidade populacional.\n\n", nome2), carta2++);

        break;

    case 6:

        (pib_c > pib_c2) ? (printf("%s vence no atributo de PIB per capita.\n\n", nome), carta1++) : (printf("%s vence no atributo de PIB per capita.\n\n", nome2), carta2++);

        break;

    default:

        break;
    }

    switch (menu2)
    {
    case 1:
        (populacao > populacao2) ? (printf("%s vence no atributo de população.\n\n", nome), carta1++) : (printf("%s vence no atributo de população.\n\n", nome2), carta2++); 
        
        break;

    case 2:

        (p_turisticos > p_turisticos2) ? (printf("%s vence no atributo de pontos turisticos.\n\n", nome), carta1++) : 
        (printf("%s vence no atributo de pontos turisticos.\n\n", nome2), carta2++);
        
        break;

    case 3:

        (area > area2) ? (printf("%s vence no atributo de Área.\n\n", nome), carta1++) : (printf("%s vence no atributo de Área.\n\n", nome2), carta2++);

        break;

    case 4:

        (pib > pib2) ? (printf("%s vence no atributo de PIB.\n\n", nome), carta1++) : (printf("%s vence no atributo de PIB.\n\n", nome2), carta2++);

        break;

    case 5:

        (densidade_pop < densidade_pop2) ? (printf("%s vence no atributo de densidade populacional.\n\n", nome), carta1++) : 
        (printf("%s vence no atributo de densidade populacional.\n\n", nome2), carta2++);

        break;

    case 6:

        (pib_c > pib_c2) ? (printf("%s vence no atributo de PIB per capita.\n\n", nome), carta1++) : (printf("%s vence no atributo de PIB per capita.\n\n", nome2), carta2++);

        break;

    default:

        break;
    }

    (carta1 > carta2) ? printf("%s venceu a batalha!\n", nome) : (carta1 < carta2) ? printf("%s venceu a batalha!\n", nome2) : printf("EMPATE!\n\n");

}