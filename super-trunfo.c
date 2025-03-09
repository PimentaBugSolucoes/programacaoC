#include <stdio.h>

// Definição da estrutura para armazenar os dados da carta
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    unsigned long int populacao; // Alterado para unsigned long int
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
    printf("População: %lu habitantes\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta.pibPerCapita);
    printf("-------------------\n");
}

// Função para comparar dois valores e exibir o vencedor
void compararAtributo(const char *nomeAtributo, float valor1, float valor2) {
    int resultado = valor1 > valor2 ? 1 : 0;
    printf("%s: Carta %d venceu (%d)\n", nomeAtributo, resultado ? 1 : 2, resultado);
}

int main() {
    // Cartas com valores fixos, apenas ajustando o tipo de população
    CartaSuperTrunfo carta1 = {'R', "R01", "Angra dos Reis\n", 207044, 819.00, 14.5, 12};
    CartaSuperTrunfo carta2 = {'S', "S01", "São Paulo\n", 12396372, 1521.11, 699.28, 120};
    
    // Calcular dados das cartas pré-definidas
    calcularDados(&carta1);
    calcularDados(&carta2);
    
    printf("\nCartas cadastradas:\n");
    exibirCarta(carta1);
    exibirCarta(carta2);

    // Comparação dos atributos
    printf("\nComparação de Cartas:\n");
    compararAtributo("População", carta1.populacao, carta2.populacao);
    compararAtributo("Área", carta1.area, carta2.area);
    compararAtributo("PIB", carta1.pib, carta2.pib);
    compararAtributo("Pontos Turísticos", carta1.pontosTuristicos, carta2.pontosTuristicos);
    compararAtributo("Densidade Populacional", carta1.densidadePopulacional, carta2.densidadePopulacional);
    compararAtributo("PIB per Capita", carta1.pibPerCapita, carta2.pibPerCapita);
    compararAtributo("Super Poder", carta1.pontosTuristicos, carta2.pontosTuristicos); // Considerando Pontos Turísticos como critério de Super Poder

    return 0;
}
