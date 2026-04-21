#include<stdio.h>
#include<windows.h>
main()
{
	SetConsoleOutputCP(65001);
int i;
 printf("ASCII – letras maiúsculas:\n");
    for (i = 65; i <= 90; ++i)               /* A‑Z */
        printf("O valor ASCII de  %c é  %d\n", (char)i, i);

    printf("\nASCII – letras minúsculas:\n");
    for (i = 97; i <= 122; ++i)              /* a‑z */
        printf("O valor ASCII de  %c é  %d\n", (char)i, i);

    
}
