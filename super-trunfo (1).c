#include <stdio.h>


// Definição da estrutura para armazenar os dados da carta
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} CartaSuperTrunfo;

// Função para calcular a densidade populacional e PIB per capita
void calcularDados(CartaSuperTrunfo *carta) {
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = (carta->pib * 1000000000) / carta->populacao;
}

// Função para exibir os dados de uma carta
void exibirCarta(CartaSuperTrunfo carta) {
    printf("\n-------------------\n");
    printf("Estado: %c\n", carta.estado);
    printf("Código da Carta: %s\n", carta.codigo);
    printf("Nome da Cidade: %s", carta.nomeCidade); // fgets já inclui \n no final
    printf("População: %d habitantes\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta.pibPerCapita);
    printf("-------------------\n");
}

int main() {
    CartaSuperTrunfo carta1 = {'R', "R01", "Angra dos Reis\n", 207044, 819.00, 14.5, 12};
    CartaSuperTrunfo carta2 = {'S', "S01", "São Paulo\n", 12396372, 1521.11, 699.28, 120};
    
    // Calcular dados das cartas pré-definidas
    calcularDados(&carta1);
    calcularDados(&carta2);
    
    printf("\nCartas cadastradas:\n");
    exibirCarta(carta1);
    exibirCarta(carta2);
    
    return 0;