#include<stdio.h>
#include<windows.h>
main()
{int c;
double f;

	SetConsoleOutputCP(65001);
printf("\nConversão de graus Celsius (°C) para Fahrenheit (°F)\n");
printf("%4s | %6s\n", "ºC", "ºF");
printf("-----+--------\n");

for (c = 0; c <= 40; c += 2) {
        /* f = 9/5 * c + 32  →  usar valores em ponto flutuante  */
        f = 9.0 / 5.0 * c + 32.0;
        printf("%4d | %6.1f\n", c, f);
}
putchar('\n');   /* linha final em branco */
    return 0;
}
