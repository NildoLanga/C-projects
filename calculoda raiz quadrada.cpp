/* b_raiz2grau.c */
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    double a, b, c;
    double delta, x1, x2;
      setlocale(LC_ALL, "");
    printf("Coeficiente a (a ≠ 0): ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);

    delta = pow(b, 2) - 4.0 * a * c;

    if (delta < 0.0) {
    	 setlocale(LC_ALL, "");
        printf("Delta = %.2lf < 0 → raízes complexas (não tratadas).\n", delta);
    } else {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("Delta = %.2lf\n", delta);
        printf("x1 = %.5lf\n", x1);
        printf("x2 = %.5lf\n", x2);
    }
    return 0;
}
