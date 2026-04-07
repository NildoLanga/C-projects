/* -------------------------------------------------------------
 * calc_math.c – Mini‑calculadora que usa a biblioteca math.h
 * -------------------------------------------------------------
 * Compile (Linux/macOS):
 *      gcc -Wall -Wextra -O2 -g calc_math.c -o calc_math -lm
 *
 * Compile (Windows – MinGW):
 *      gcc -Wall -Wextra -O2 -g calc_math.c -o calc_math -lm
 *
 * Compile (Windows – MSVC):
 *      cl /Zi /Fe:calc_math.exe calc_math.c
 *
 * ------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>          /* <math.h> traz todas as funções matemáticas */

int main(void)
{
    double a, b;           /* operandos que o usuário vai digitar */

    printf("=== Mini‑calculadora com <math.h> ===\n");
    printf("Digite o primeiro número: ");
    if (scanf("%lf", &a) != 1) return 1;
    printf("Digite o segundo número:  ");
    if (scanf("%lf", &b) != 1) return 1;

    /* Operações aritméticas básicas */
    printf("\n--- Operações básicas ---\n");
    printf("%g + %g = %g\n", a, b, a + b);
    printf("%g - %g = %g\n", a, b, a - b);
    printf("%g * %g = %g\n", a, b, a * b);
    if (b != 0.0)
        printf("%g / %g = %g\n", a, b, a / b);
    else
        printf("%g / %g = **divisão por zero (não permitida)**\n", a, b);

    /* Funções da biblioteca math.h */
    printf("\n--- Funções matemáticas ---\n");

    /* 1) raiz quadrada (sqrt) – funciona só com número não‑negativo */
    if (a >= 0.0)
        printf("sqrt(%g) = %g\n", a, sqrt(a));
    else
        printf("sqrt(%g) = **valor negativo, indefinido**\n", a);

    /* 2) potência (pow) – a ^ b */
    printf("%g ^ %g = %g\n", a, b, pow(a, b));

    /* 3) seno e cosseno – o argumento deve estar em radianos   */
    printf("sin(%g rad) = %g\n", a, sin(a));
    printf("cos(%g rad) = %g\n", a, cos(a));

    /* 4) tangente – cuidado com ângulos onde o cosseno é zero */
    printf("tan(%g rad) = %g\n", a, tan(a));

    /* 5) logaritmo natural (ln) e log10 */
    if (a > 0.0) {
        printf("ln(%g) = %g\n", a, log(a));
        printf("log10(%g) = %g\n", a, log10(a));
    } else {
        printf("ln(%g) = **valor não‑positivo, indefinido**\n", a);
        printf("log10(%g) = **valor não‑positivo, indefinido**\n", a);
    }

    /* 6) constante π (M_PI) – disponível em <math.h> se _USE_MATH_DEFINES (MSVC) */
    printf("\n--- Constantes ---\n");
    printf("π (M_PI) = %.15f\n", M_PI);
    printf("e (M_E)  = %.15f\n", M_E);

    printf("\nFim do programa.\n");
    return 0;
}
