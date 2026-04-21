#include<stdio.h>
#include<windows.h>


const int num = 10;
#define largura 10
#define comprimento (largura*5)
#define nome "pedro"


main()
{
	SetConsoleOutputCP(65001);
	printf("comprimento = %d\n", comprimento);
	puts(nome);         // mostra o nome guardado em #define nome
	printf("%s", nome); //Outra forma de mostrar o nome
}