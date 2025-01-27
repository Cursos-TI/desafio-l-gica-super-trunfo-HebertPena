#include <stdio.h>
//declaração de funções
void get_info(void);
void print_results(void);

// Declaração das variáveis
char nome[20], nome2[20], codigo[5], codigo2[5], estado[20], estado2[20];
int populacao, populacao2, p_turisticos, p_turisticos2;
float area, area2, pib, pib2, densidade_pop, densidade_pop2, pib_c, pib_c2;

int main() {
    get_info();
    densidade_pop = (populacao / area);
    densidade_pop2 = (populacao2 / area2);
    pib_c = (pib / populacao);
    pib_c2 = (pib2 / populacao2);
    print_results();
  
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
    printf("***RESULTADO DA BATALHA***\n");


    if (populacao > populacao2) {
        printf("%s é a vencedora em população\n", nome);
    }
    else if (populacao < populacao2) {
        printf("%s é a vencedora em população\n", nome2);
    }
    else {
        printf("Temos um empate em população\n");
    }


    if (p_turisticos > p_turisticos2) {
        printf("%s é a vencedora em pontos turisticos\n", nome);
    }
    else if (p_turisticos < p_turisticos2) {
        printf("%s é a vencedora em pontos turisticos\n", nome2);
    }
    else {
        printf("Temos um empate em pontos turisticos\n");
    }


    if (area > area2) {
        printf("%s é a vencedora em Área\n", nome);
    }
    else if (area < area2) {
        printf("%s é a vencedora em Área\n", nome2);
    }
    else {
        printf("Temos um empate em Área\n");
    }


    if (pib > pib2) {
        printf("%s é a vencedora em PIB\n", nome);
    }
    else if (pib < pib2) {
        printf("%s é a vencedora em PIB\n", nome2);
    }
    else {
        printf("Temos um empate em PIB\n");
    }


    if (densidade_pop2 > densidade_pop) {
        printf("%s é a vencedora em densidade populacional\n", nome);
    }
    else if (densidade_pop2 < densidade_pop) {
        printf("%s é a vencedora em densidade populacional\n", nome2);
    }
    else {
        printf("Temos um empate em densidade populacional\n");
    }


    if (pib_c > pib_c2) {
        printf("%s é a vencedora em PIB per capita\n", nome);
    }
    else if (pib_c < pib_c2) {
        printf("%s é a vencedora em PIB per capita\n", nome2);
    }
    else {
        printf("Temos um empate em PIB per capita\n");
    }

    printf("\n\n");

}
