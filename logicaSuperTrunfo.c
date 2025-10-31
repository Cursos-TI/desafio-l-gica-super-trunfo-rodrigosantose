#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

    int main() {

    // 1. DADOS DA CARTA 1 (São Paulo)
    // O "1" no final do nome da variável mostra que é da Carta 1.

    char estadoCarta1[3] = "SP";
    char codigoCarta1[5] = "A1";
    char nomeCidadeCarta1[50] = "São Paulo";
    int populacaoCarta1 = 12396372;
    float areaCarta1 = 1521.11;
    float pibCarta1 = 763.8;
    int pontosTuristicosCarta1 = 150;
    
    // Variáveis para guardar os resultados dos cálculos da Carta 1  
    float densidadeCarta1;
    float pibPerCapitaCarta1; 
 
    // 2. DADOS DA CARTA 2 (Rio de Janeiro)
    // deixei seguindo o mesmo padrão, usando "2" no final.  

    char estadoCarta2[3] = "RJ";
    char codigoCarta2[5] = "B2";
    char nomeCidadeCarta2[50] = "Rio de Janeiro";
    int populacaoCarta2 = 6775561;
    float areaCarta2 = 1200.33;
    float pibCarta2 = 357.7;
    int pontosTuristicosCarta2 = 200;

    // Variáveis para guardar os resultados dos cálculos da Carta 2  
    float densidadeCarta2;
    float pibPerCapitaCarta2;


    // 3. Aqui calculei a densidade populacional e Pib per capita.  

    // --- Cálculos para Carta 1 --- 
    // (Verificação simples para evitar divisão por zero)  
    if (areaCarta1 > 0) {
        densidadeCarta1 = populacaoCarta1 / areaCarta1;
    } else {
        densidadeCarta1 = 0;
    }

    if (populacaoCarta1 > 0) {
        pibPerCapitaCarta1 = pibCarta1 / populacaoCarta1;
    } else {
        pibPerCapitaCarta1 = 0;
    }

    // --- Cálculos para Carta 2 ---  
    if (areaCarta2 > 0) {
        densidadeCarta2 = populacaoCarta2 / areaCarta2;
    } else {
        densidadeCarta2 = 0;
    }

    if (populacaoCarta2 > 0) {
        pibPerCapitaCarta2 = pibCarta2 / populacaoCarta2;
    } else {
        pibPerCapitaCarta2 = 0;
    }

    // 4. Exibir os dados pra poder verificar   

    printf("===========================================\n");
    printf("       CARTAS REGISTRADAS NO JOGO\n");
    printf("===========================================\n");
    
    printf("\n--- CARTA 1 (%s) ---\n", codigoCarta1);
    printf("Cidade: %s (%s)\n", nomeCidadeCarta1, estadoCarta1);
    printf("População: %d\n", populacaoCarta1);
    printf("Área: %.2f km²\n", areaCarta1);
    printf("PIB: %.2f (unidade)\n", pibCarta1);
    printf("-> Densidade Calculada: %.2f hab/km²\n", densidadeCarta1);

    printf("\n--- CARTA 2 (%s) ---\n", codigoCarta2);
    printf("Cidade: %s (%s)\n", nomeCidadeCarta2, estadoCarta2);
    printf("População: %d\n", populacaoCarta2);
    printf("Área: %.2f km²\n", areaCarta2);
    printf("PIB: %.2f (unidade)\n", pibCarta2);
    printf("-> Densidade Calculada: %.2f hab/km²\n", densidadeCarta2);

    // 5. Aqui compara os atributos e define o vencedor 
    // Atributo "População" escolhido no código (maior vence). 

    printf("\n===========================================\n");
    printf("       RESULTADO DA COMPARAÇÃO\n");
    printf("===========================================\n");

    // --- Início da Lógica de Decisão (if / else if / else) ---
    
    char atributoComparado[50] = "População";

    printf("Atributo: %s (Maior valor vence!)\n\n", atributoComparado);

    // Exibe os valores que estão sendo comparados
    printf("Carta 1 - %s (%s): %d\n", nomeCidadeCarta1, estadoCarta1, populacaoCarta1);
    printf("Carta 2 - %s (%s): %d\n", nomeCidadeCarta2, estadoCarta2, populacaoCarta2);

    // A ESTRUTURA DE DECISÃO
    // Comparamos as variáveis simples diretamente
    if (populacaoCarta1 > populacaoCarta2) {
        // Se a população da carta 1 for MAIOR
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidadeCarta1);
    } 
    else if (populacaoCarta2 > populacaoCarta1) {
        // Se a população da carta 2 for MAIOR
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidadeCarta2);
    } 
    else {
        // Se nenhum for maior, eles são iguais
        printf("\nResultado: Empate!\n");
    }
    
    printf("===========================================\n");
}
