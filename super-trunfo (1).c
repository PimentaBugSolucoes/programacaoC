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
} CartaSuperTrunfo;

// Função para ler os dados de uma carta
void lerCarta(CartaSuperTrunfo *carta) {
    printf("\nDigite a letra do estado (A-H): ");
    scanf(" %c", &carta->estado);
    
    printf("Digite o código da carta: ");
    scanf(" %3s", carta->codigo);
    
    printf("Digite o nome da cidade: ");
    getchar(); // Limpa o buffer do teclado
    fgets(carta->nomeCidade, sizeof(carta->nomeCidade), stdin);
    
    printf("Digite a população da cidade: ");
    scanf(" %d", &carta->populacao);
    
    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &carta->area);
    
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &carta->pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &carta->pontosTuristicos);
}

// Função para exibir os dados de uma carta
void exibirCarta(CartaSuperTrunfo carta) {
    printf("\n-------------------\n");
    printf("Estado: %c\n", carta.estado);
    printf("Código da Carta: %s\n", carta.codigo);
    printf("Nome da Cidade: %s", carta.nomeCidade); // fgets já inclui \n no final
    printf("População: %d habitantes\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("-------------------\n");
}

int main() {
    CartaSuperTrunfo carta1 = {'R', "R01", "Angra dos Reis\n", 207044, 819.00, 14.5, 12};
    CartaSuperTrunfo carta2 = {'S', "S01", "São Paulo\n", 12396372, 1521.11, 699.28, 120};
    
    printf("\nCartas cadastradas:\n");
    exibirCarta(carta1);
    exibirCarta(carta2);
    
    return 0;
}
