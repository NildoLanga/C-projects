/*********************************************************************
 *  JOGO DA VELEHA  – 2 jogadores , nao consegui criar a funcoa o jogador pc
 *  ---------------------------------------------------------------
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>          /* SetConsoleOutputCP()  */

#define JOGADOR_X   'X'
#define JOGADOR_O   'O'
#define EMPATE      'E'
#define CARACTERE_BRANCO '_'  /* o caracter que é usado para o preenchimento incial da matriz*/

#define LINHAS      3
#define COLUNAS     3
#define TAM_TAB     (LINHAS*COLUNAS)

/* ----------  VARIÁVEIS GLOBAIS  ---------- */
int placarX  = 0;
int placarO  = 0;
int tab[LINHAS][COLUNAS];   /* tabuleiro */

/* ---------- funcoes  ---------- */
void limparTela(void);
void desenhaTabuleiro(void);
int verificaVencedor(char *ganhador);
int joga(char simbolo);
void jogo(void);
void resultado(void);
void menuPrincipal(void);

/* limpa o ecra */
void limparTela(void) {
    system("cls"); /* funçao de clear em windows */
}

/*********************************************************************
 *  2. DESENHA a mesa do jogo
 *********************************************************************/
void desenhaTabuleiro(void) {
    limparTela();
    printf("\n    0   1   2\n");
    for (int i = 0; i < LINHAS; ++i) {
        printf("%d ", i);
        for (int j = 0; j < COLUNAS; ++j) {
            printf(" %c ", tab[i][j]);
            if (j < COLUNAS-1) printf("|");
        }
        printf("\n");
        if (i < LINHAS-1) printf("   ---+---+---\n");
    }
    printf("\n");
}

/*********************************************************************
 * funcao da verificacao
 *********************************************************************/
int verificaVencedor(char *ganhador) {
    /* alguem conseguiu preencher uma linha inteira ou uma diagonal inteira? */
    for (int i = 0; i < LINHAS; ++i) {
        if (tab[i][0] != CARACTERE_BRANCO &&
            tab[i][0] == tab[i][1] &&
            tab[i][1] == tab[i][2]) {
            *ganhador = tab[i][0];
        }
        if (tab[0][i] != CARACTERE_BRANCO &&
            tab[0][i] == tab[1][i] &&
            tab[1][i] == tab[2][i]) {
            *ganhador = tab[0][i];
        }
    }
    /* diagonais */
    if (tab[0][0] != CARACTERE_BRANCO &&
        tab[0][0] == tab[1][1] &&
        tab[1][1] == tab[2][2]) {
        *ganhador = tab[0][0];
        return 1;
    }
    if (tab[0][2] != CARACTERE_BRANCO &&
        tab[0][2] == tab[1][1] &&
        tab[1][1] == tab[2][0]) {
        *ganhador = tab[0][2];
        return 1;
    }
    /* ainda há espaço livre? */
    for (int i = 0; i < LINHAS; ++i)
        for (int j = 0; j < COLUNAS; ++j)
            if (tab[i][j] == CARACTERE_BRANCO)
                return 0;   /* jogo continua */

    *ganhador = EMPATE; /* empate */
    return 1;            /* garantir retorno em todos os caminhos */
}

/*********************************************************************
 *  Funcao para ler jogada do humano
 *********************************************************************/
int joga(char simbolo) {
    int pos;
    printf("\nJogador %c – digite posição (1-%d): ", simbolo, TAM_TAB);
    if (scanf("%d", &pos) != 1) {
        while (getchar() != '\n');
        return 0; /* invalida */
    }
    while (getchar() != '\n'); /* limpa buffer */

    /* intervalos fora do tabuleiro */
    if (pos < 1 || pos > TAM_TAB) {
        return 0;                       /* inválida */
    }

    int r = (pos-1) / COLUNAS;
    int c = (pos-1) % COLUNAS;

    /* já ocupada? */
    if (tab[r][c] != CARACTERE_BRANCO) {
        return 0;                       /* inválida */
    }

    tab[r][c] = simbolo;               /* grava jogada */
    return 1;                           /* válida */
}

void jogo(void) {
    /* inicializa a mesa */
    for (int i = 0; i < LINHAS; ++i)
        for (int j = 0; j < COLUNAS; ++j)
            tab[i][j] = CARACTERE_BRANCO;

    char jogadorAtual = JOGADOR_X;
    int contJogadas = 0;
    char vencedor = EMPATE;

    while (1) {
        desenhaTabuleiro();
        printf("\nJogador %c sua vez\n", jogadorAtual);
        if (!joga(jogadorAtual)) {
            printf("\nJogada inválida! Tente novamente.\n");
            continue;
        }

        contJogadas++;

        if (verificaVencedor(&vencedor)) {
            desenhaTabuleiro();
            if (vencedor == EMPATE)
                printf("\n>>> EMPATE! <<<\n");
            else
                printf("\n>>> Jogador %c venceu! <<<\n", vencedor);

            /* Atualiza placar */
            if (vencedor == JOGADOR_X)      placarX++;
            else if (vencedor == JOGADOR_O) placarO++;

            printf("\nPressione ENTER para voltar ao menu...");
            while (getchar() != '\n');
            break;
        }

        /* Alterna jogador */
        jogadorAtual = (jogadorAtual == JOGADOR_X) ? JOGADOR_O : JOGADOR_X;
    }
}

void resultado(void) {
    limparTela();
    printf("\n=== PLACAR ===\n");
    printf("Jogador X (X): %d\n", placarX);
    printf("Jogador O (O): %d\n", placarO);
    printf("\nPressione ENTER para voltar ao menu...");
    while (getchar() != '\n');
}

/* menu de escolha */
void menuPrincipal(void) {
    limparTela();
    printf("***************************************\n");
    printf("*  BEM-VINDO AO JOGO DA VELEHA  *\n");
    printf("***************************************\n\n");

    int opcao;
    do {
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1 – Jogar contra outro jogador\n");
        printf("2 – Ver placar\n");
        printf("3 – Sair\n");
        printf("\nEscolha: ");

        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n');
            opcao = 0;
        }

        switch (opcao) {
            case 1:   jogo();   break;
            case 2:   resultado();   break;
            case 3:   printf("\nObrigado por jogar! Ate a próxima.\n"); return;
            default:  printf("\nOpção inválida! Tente novamente.\n"); break;
        }
    } while (1);
}

/* programa main*/
int main(void) {
    SetConsoleOutputCP(65001);   /* UTF-8 em windows, opcional */
    menuPrincipal();
}
