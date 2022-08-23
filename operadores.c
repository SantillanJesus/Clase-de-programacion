/****************************************
Realizo: Angel Santillan
Fecha 23 ago 2022
manejo de operadores logicos y de relacion
operadores.c

****************************************/
#include<stdio.h>

int main ()
{
//declaracion de variables
int A=5;
int B=7;

//operaciones de codigo

printf("(A==B) el Resultado es: %d\n", (A==B)&&(A<B));
printf("(A==5)||(A>7) el Resultado es: %d\n", (A==5)||(A>7));
printf("!(A==5) el Resultado es: %d\n", !(A==5));
return (0);

}
