/* e_media5.c */
#include <stdio.h>
#include <locale.h>
int main(void)
{
    double nota, soma = 0.0;
    const int QUANT = 5;
    int i;

    for (i = 1; i <= QUANT; ++i) {
    	setlocale(LC_ALL, "");
        printf("Nota %d: ", i);
        scanf("%lf", &nota);
        soma += nota;
    }
     setlocale(LC_ALL, "");
    printf("\nMédia dos %d testes = %.2lf\n", QUANT, soma / QUANT);
    return 0;
}
