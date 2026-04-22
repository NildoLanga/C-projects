#include<stdio.h>
#include<windows.h>
#include <math.h> 
#define PI M_PI 
//funçoes declaraçao
double perimetro_quadrado(double lado);
double perimetro_circulo(double raio);
double perimetro_retangulo(double base, double altura);
double perimetro_triangulo_equilatero(double lado);
double perimetro_pentagono(double lado);
double perimetro_hexagono(double lado);

//funçoes e os parametros de entrada(argumentos)

double perimetro_quadrado(double lado) {
    return 4.0 * lado;
}

double perimetro_circulo(double raio) {
    return 2.0 * PI * raio;
}

double perimetro_retangulo(double base, double altura) {
    return 2.0 * (base + altura);
}

double perimetro_triangulo_equilatero(double lado) {
    return 3.0 * lado;
}

double perimetro_pentagono(double lado) {
    return 5.0 * lado;
}

double perimetro_hexagono(double lado) {
    return 6.0 * lado;
}
int menu(void) {
    int escolhe;
    printf("\n*** MENU PERÍMETROS *******\n");
    printf(" 1 – Quadrado\n");
    printf(" 2 – Círculo\n");
    printf(" 3 – Retângulo\n");
    printf(" 4 – Triângulo Equilátero\n");
    printf(" 5 – Pentágono\n");
    printf(" 6 – Hexágono\n");
    printf(" 0 – Sair do programa\n");
    printf("----------------------------\n");
    printf("Escolha uma opção: ");
    if (scanf("%d", &escolhe) != 1) {          
        while ( getchar() != '\n' );      //o equivalente de enter no ASCII. a opcao é validada pelo enter
                                
    }
    return escolhe;
}

main()
{
	SetConsoleOutputCP(65001);
  int opcao;	
  double lado, base, altura, raio;
     do {
        opcao = menu();           

        switch (opcao) {
            case 1:  
                printf("\nInforme o lado do quadrado: ");
                scanf("%lf", &lado);
                printf("Perímetro = %.2lf\n", perimetro_quadrado(lado));
                break;

            case 2:   
                printf("\nInforme o raio do círculo: ");
                scanf("%lf", &raio);
                printf("Perímetro = %.2lf\n", perimetro_circulo(raio));
                break;

            case 3:  
                printf("\nInforme a base do retângulo: ");
                scanf("%lf", &base);
                printf("Informe a altura do retângulo: ");
                scanf("%lf", &altura);
                printf("Perímetro = %.2lf\n", perimetro_retangulo(base, altura));
                break;

            case 4:   
                printf("\nInforme o lado do triângulo equilátero: ");
                scanf("%lf", &lado);
                printf("Perímetro = %.2lf\n", perimetro_triangulo_equilatero(lado));
                break;

            case 5:   
                printf("\nInforme o lado do pentágono: ");
                scanf("%lf", &lado);
                printf("Perímetro = %.2lf\n", perimetro_pentagono(lado));
                break;

            case 6:       
                printf("\nInforme o lado do hexágono: ");
                scanf("%lf", &lado);
                printf("Perímetro = %.2lf\n", perimetro_hexagono(lado));
                break;

            case 0: 
                printf("\nPrograma terminado \n");
                break;

            case -1: 
                printf("\nValor nao reconhecido, tente de novo.\n");
                break;

            default:  
                printf("\nOpção inválida! Selecione um número entre 0 e 6.\n");
        }
    } while (opcao != 0);        

    

}
