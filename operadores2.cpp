/*Realizo: Jesus Santillan
Fecha 23 ago 2022
manejo de operaciones logicas y de relacion 
operadores2.c
******************************************/
#include<stdio.h>

int main()
{
    int A=0;
    int B=0;
    
    printf("Tabla de verdad AND &&\n");
    printf("A=0 && B==0 =%d\n" ,A&&B);
    printf("A=%d && B=%d = %d\n" ,A, !B, A&&!B);
    printf("A=%d && B=%d = %d\n" ,!A,B, !A&&B);  
    printf("A=%d && B=%d = %d\n" ,!A,!B, !A&&!B);
	printf ("Tabla de verdad OR ||\n");
	printf("A      B");
	printf("%d || %d = %d\n",A,B,A||B);
	printf("%d || %d = %d\n",A,!B,A||!B);
	printf("%d || %d = %d\n",!A,B,!A||B);
    printf("%d || %d = %d\n",!A,!B,!A||!B);
	
    return(0); 
	}
    
    
