/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char * cadena = malloc(3000);
    memset(cadena,0,3000);
    char * korg = malloc(300);
    char * roland = malloc(3);

    strcpy(cadena,"koro");
    cadena[4]='\0';
    printf("FIN");

    return 0;
}
