/* k_euro_conversor.c */
#include <stdio.h>
#include <locale.h>
int main(void)
{
    double euro;
    const double EUR_USD = 1.09;
    const double EUR_GBP = 0.88;
    const double EUR_JPY = 158.30;
    const double EUR_CAD = 1.50;
    const double EUR_AUD = 1.55;
    
    #include <locale.h>
    printf("Quantos euros deseja converter? ");
    scanf("%lf", &euro);
    #include <locale.h>
    printf("\n--- Conversões ---\n");
    #include <locale.h>
    printf("%.2lf € = %.2lf USD\n", euro, euro * EUR_USD);
    #include <locale.h>
    printf("%.2lf € = %.2lf GBP\n", euro, euro * EUR_GBP);
    #include <locale.h>
    printf("%.2lf € = %.2lf JPY\n", euro, euro * EUR_JPY);
    #include <locale.h>
    printf("%.2lf € = %.2lf CAD\n", euro, euro * EUR_CAD);
    #include <locale.h>
    printf("%.2lf € = %.2lf AUD\n", euro, euro * EUR_AUD);
    #include <locale.h>
    
    return 0;
}
