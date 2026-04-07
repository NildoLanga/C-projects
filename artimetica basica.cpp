/* d_operacoes.c */
#include <stdio.h>
#include <locale.h>
int main(void)
{
    double x, y;
     setlocale(LC_ALL, "");
    printf("Primeiro número: ");
    scanf("%lf", &x);
     setlocale(LC_ALL, "");
    printf("Segundo número : ");
    scanf("%lf", &y);
      setlocale(LC_ALL, "");
    printf("\nResultados:\n");
     setlocale(LC_ALL, "");
    printf("%.2lf + %.2lf = %.2lf\n", x, y, x + y);
     setlocale(LC_ALL, "");
    printf("%.2lf - %.2lf = %.2lf\n", x, y, x - y);
     setlocale(LC_ALL, "");
    printf("%.2lf * %.2lf = %.2lf\n", x, y, x * y);
    
	if (y != 0.0){
	

     setlocale(LC_ALL, "");
        printf("%.2lf / %.2lf = %.5lf\n", x, y, x / y);
        }
    else{

    
     setlocale(LC_ALL, "");
        printf("Divisão por zero não é permitida.\n");
        		}
    return 0;
}
