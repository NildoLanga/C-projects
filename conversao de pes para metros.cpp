/* f_pe_para_metro.c */
#include <stdio.h>
#include <locale.h>
int main(void)
{
    double pe, metros, centi;
    setlocale(LC_ALL, "");
    printf("Valor em pés: ");
    scanf("%lf", &pe);

    metros = pe * 0.30479;          // 1 pé = 0,30479 m
    centi  = pe * 30.479;          // 1 pé = 30,479 cm
    setlocale(LC_ALL, "");
    
    printf("%.3lf pé = %.3lf metros = %.3lf centímetros\n",
           pe, metros, centi);
    return 0;
}
