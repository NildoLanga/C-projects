
/* -------------------------------------------------------------
 * menu.c – Programa exemplo que apresenta um menu de opções
 * -------------------------------------------------------------
 *
 * Como compilar (Linux/macOS):
 *     gcc -Wall -Wextra -O2 -g menu.c -o menu
 *
 * Como compilar (Windows – MinGW):
 *     gcc -Wall -Wextra -O2 -g menu.c -o menu.exe
 *
 * Como compilar (Windows – MSVC):
 *     cl /Zi /Fe:menu.exe menu.c
 *
 * ------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* ----- Protótipos das funções do menu ----- */
void opcao_1(void);
void opcao_2(void);
void opcao_3(void);
void limpar_tela(void);

/* -------------------------------------------------------------
 * Função principal – controla o laço do menu
 * ------------------------------------------------------------- */
int main(void)
{
    int escolha = -1;               /* guardará a opção digitada */

    /* Opcional: semeia o gerador de números aleatórios */
    srand((unsigned)time(NULL));

    while (escolha != 0) {
        /* ----------- Exibe o menu ------------- */
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1 - Mostrar mensagem\n");
        printf("2 - Calcular soma de dois números\n");
        printf("3 - Gerar número aleatório (0‑99)\n");
        printf("0 - Sair\n");
        printf("Digite a sua escolha: ");

        /* ----------- Lê a opção --------------- */
        if (scanf("%d", &escolha) != 1) {
            /* Entrada inválida (não é número) */
            printf("\nEntrada inválida! Digite apenas o número da opção.\n");
            /* Limpa o buffer até o próximo '\n' */
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) { }
            escolha = -1;          /* força o loop a continuar */
            continue;
        }

        /* ----------- Executa a ação ------------ */
        switch (escolha) {
            case 1:
                opcao_1();
                break;
            case 2:
                opcao_2();
                break;
            case 3:
                opcao_3();
                break;
            case 0:
                printf("\nEncerrando o programa. Até a próxima!\n");
                break;
            default:
                printf("\nOpção %d inexistente. Tente novamente.\n", escolha);
                break;
        }

        /* Se não for a opção de sair, limpa a tela (opcional) */
        if (escolha != 0) {
            /* Em sistemas POSIX: system("clear")
               Em Windows:          system("cls")   */
            limpar_tela();
        }
    }

    return 0;
}

/* -------------------------------------------------------------
 * Implementação das funções chamadas pelo menu
 * ------------------------------------------------------------- */

/* 1 – Apenas exibe uma mensagem */
void opcao_1(void)
{
    printf("\n>>> Você escolheu a opção 1: imprimir esta mensagem.\n");
}

/* 2 – Soma dois números informados pelo usuário */
void opcao_2(void)
{
    double a, b;
    printf("\n>>> Opção 2: soma de dois valores.\n");
    printf("Digite o primeiro número: ");
    if (scanf("%lf", &a) != 1) {
        printf("Entrada inválida! Abortando a operação.\n");
        return;
    }
    printf("Digite o segundo número: ");
    if (scanf("%lf", &b) != 1) {
        printf("Entrada inválida! Abortando a operação.\n");
        return;
    }
    printf("Resultado: %g + %g = %g\n", a, b, a + b);
}

/* 3 – Gera e mostra um número aleatório entre 0 e 99 */
void opcao_3(void)
{
    int aleatorio = rand() % 100;   /* 0 … 99 */
    printf("\n>>> Opção 3: número aleatório gerado: %d\n", aleatorio);
}

/* -------------------------------------------------------------
 * Função auxiliar – limpar a tela (independente de SO)
 * ------------------------------------------------------------- */
void limpar_tela(void)
{
#if defined(_WIN32) || defined(_WIN64)
    system("cls");
#else
    system("clear");
#endif
}
