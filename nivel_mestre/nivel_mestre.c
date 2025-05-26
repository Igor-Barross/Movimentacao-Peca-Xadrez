#include <stdio.h>


void movimentoTorre(int movimentos) {
    if (movimentos > 0) {
        movimentoTorre(movimentos - 1);                     // chamada recursiva com um movimento a menos
        printf("%d - Direita\n", movimentos);   
    }
}


void movimentoBispo(int movimentos) {
    int contador =  1;

    for (int i = 1; i <= movimentos; i++) {                 // loop vertical
        for (int j = 1; j <= movimentos; j++) {             // loop horizontal
            if (i == j) {                                   // apenas quando for movimento diagonal
                printf("%d - Cima + Direita\n", contador);
                contador++;
            }
        }
    }  
}

void movimentoRainha(int movimentos) {
    if (movimentos > 0) {
        movimentoTorre(movimentos - 1);                     // chamada recursiva com um movimento a menos
        printf("%d - Esquerda\n", movimentos);   
    }
}


int main() {
    
    int casasTorre;
    int casasBispo;
    int casasRainha;
    int movimentosCavalo;


    // Movimentação da torre 
    printf("Digite quantas casas a direita torre irá movimentar (max: 5 casas): \n");
    scanf("%d", &casasTorre);
    printf("\n");

    printf("Movimentação da torre:\n");
    movimentoTorre(casasTorre);
    printf("\n");


    // Movimentação do bispo 
    printf("Digite quantas casas na diagonal o bispo irá movimentar (max: 5 casas): \n");
    scanf("%d", &casasBispo);
    printf("\n");

    printf("Movimentação da bispo:\n");

    movimentoBispo(casasBispo);
    printf("\n");

    
    // Movimentação da rainha 
    printf("Digite quantas casas a esquerda a rainha irá movimentar (max: 8 casas): \n");
    scanf("%d", &casasRainha);
    printf("\n");

    printf("Movimentação da rainha:\n");
    
    movimentoRainha(casasRainha);
    printf("\n");

    // Movimentação do cavalo
    printf("Movimentação do cavalo\n");
    int movimento = 1;

    for (int i = 1; i <= 2; ++i) {                      // dois movimentos para cima
        printf("%d - Cima\n", movimento++);
        for (int j = 0; j < 1 && i == 2; ++j) {         // só entra quando i == 2
            printf("%d - Direita\n", movimento++);
        }
    }
    return 0;
}
