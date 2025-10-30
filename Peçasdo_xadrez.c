#include <stdio.h>

/* ===============================================
   DESAFIO FINAL - XADREZ COMPLETO COM RECURSIVIDADE
   Autor: Ricardo Cantanhede
   =============================================== */

/*
   Cada peça terá sua própria função de movimento.
   O objetivo é demonstrar o raciocínio lógico e uso de recursão/loops complexos.
*/

/* ---------------- TORRE (recursiva) ---------------- */
void moverTorre(int casas) {
    if (casas == 0)
        return;
    printf("Torre: Direita\n");
    moverTorre(casas - 1);
}

/* ---------------- BISPO (recursiva + loops aninhados) ---------------- */
void moverBispo(int casas, int linha, int coluna) {
    if (casas == 0)
        return;

    for (int i = 0; i < 1; i++) {  // Movimento vertical
        printf("Bispo: Cima\n");
        for (int j = 0; j < 1; j++) {  // Movimento horizontal
            printf("Bispo: Direita\n");
        }
    }

    moverBispo(casas - 1, linha + 1, coluna + 1);
}

/* ---------------- RAINHA (recursiva combinada) ---------------- */
void moverRainha(int casas) {
    if (casas == 0)
        return;
    printf("Rainha: Direita\n");
    printf("Rainha: Cima\n");
    moverRainha(casas - 1);
}

/* ---------------- CAVALO (loops aninhados complexos) ---------------- */
void moverCavalo() {
    printf("Movimento do Cavalo:\n");
    for (int i = 1; i <= 2; i++) { // duas casas para cima
        printf("Cavalo: Cima %d\n", i);
        for (int j = 1; j <= 1; j++) { // uma casa para direita
            if (i == 2) {
                printf("Cavalo: Direita %d\n", j);
                break; // sai ao completar o "L"
            } else {
                continue;
            }
        }
    }
}

/* ---------------- REI (recursivo simples) ---------------- */
void moverRei(int casas) {
    if (casas == 0)
        return;
    printf("Rei: Direita\n");
    printf("Rei: Cima\n");
    moverRei(casas - 1);
}

/* ---------------- PEÃO (avanço simples + condição) ---------------- */
void moverPeao(int casas) {
    for (int i = 1; i <= casas; i++) {
        printf("Peão: Frente %d\n", i);
        if (i == 1)
            printf("(Primeiro movimento: pode andar duas casas)\n");
        if (i > 2) {
            printf("Peão não pode andar mais que duas casas no início.\n");
            break;
        }
    }
}

/* ---------------- Função principal ---------------- */
int main() {
    int casasTorre = 3;
    int casasBispo = 3;
    int casasRainha = 3;
    int casasRei = 2;
    int casasPeao = 3;

    printf("=== MOVIMENTO DA TORRE ===\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("=== MOVIMENTO DO BISPO ===\n");
    moverBispo(casasBispo, 0, 0);
    printf("\n");

    printf("=== MOVIMENTO DA RAINHA ===\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("=== MOVIMENTO DO CAVALO ===\n");
    moverCavalo();
    printf("\n");

    printf("=== MOVIMENTO DO REI ===\n");
    moverRei(casasRei);
    printf("\n");

    printf("=== MOVIMENTO DO PEÃO ===\n");
    moverPeao(casasPeao);
    printf("\n");

    printf("=== FIM DA SIMULAÇÃO ===\n");

    return 0;
}
