#include <stdio.h>


int main() {
    
    int movimentosTorre;
    int movimentosBispo;
    int movimentosRainha;
    int movimentosCavalo;


    // Movimentação da torre 
    printf("Digite quantas casas a direita torre irá movimentar (max: 5 casas): \n");
    scanf("%d", &movimentosTorre);
    printf("\n");

    
    printf("Movimentação da torre:\n");
    for (int i = 1; i <= movimentosTorre; ++i) {        // laço for para fazer repetição dos movimentos
        printf("%d - Direita\n", i);                    // exibição dos movimentos
    }
    printf("\n");


    // Movimentação do bispo 
    printf("Digite quantas casas na diagonal o bispo irá movimentar (max: 5 casas): \n");
    scanf("%d", &movimentosBispo);
    printf("\n");

    int qtdMovimentoBispo = 1;

    printf("Movimentação da bispo:\n");

    while (qtdMovimentoBispo <= movimentosBispo) {      // laço while para fazer repetição dos movimentos
        printf("%d - Cima, Direita\n",                  // exibição dos movimetnos
           qtdMovimentoBispo);    
        ++qtdMovimentoBispo;                            // incremento para não virar um loop infinito
    }
    printf("\n");

    
    // Movimentação da rainha 
    printf("Digite quantas casas a esquerda a rainha irá movimentar (max: 8 casas): \n");
    scanf("%d", &movimentosRainha);
    printf("\n");

    int qtdMovimentosRainha = 1;

    printf("Movimentação da rainha:\n");
    
    do {                                                // laço do while para fazer repetição dos movimentos
        printf("%d - esquerda\n",                       // exibição dos movimetnos
            qtdMovimentosRainha);
        ++qtdMovimentosRainha;                          // incremento para não virar um loop infinito
    } while (qtdMovimentosRainha <= movimentosRainha);  // condição para o laço se repetir
    printf("\n");


    // Movimentação do cavalo
    printf("Movimentação do cavalo\n");
    

    for (int i = 1; i <= 1; i++) {                      // laço for para fazer a movimentação para esquerda
        
        int movimentosBaixo = 1;                        // variavel para contar os movimentos

        while (movimentosBaixo <= 2) {                  // laço while para fazer a movimentação para baixo
            printf("%d - baixo\n", movimentosBaixo);    // exibição dos movimentos
            movimentosBaixo++;                          // incremento para não virar um loop infinito
        }
        
        printf("%d - esquerda", i);                     // exibição do movimento 
    }
    

    return 0;
}