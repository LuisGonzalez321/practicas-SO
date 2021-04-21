#include<stdio.h>

void main()
{
//Variables
int N = 10;
int arreglo[N];
int numero;
int i=0;
double suma=0;
//Indicar que hace el programa
puts("ESTE PROGRAMA CALCULA LA SUMA DE LOS ELEMENTOS DE UN ARREGLEO");
//Leer datos
for (i = 0; i<10; i++)
{
 printf("Ingrese un numero: ");
 scanf("%d",arreglo+i);
}
//Procesar
for (i = 0; i<10; i++)
{
 suma= suma+ arreglo[i];
}
//Mostrar resultados
printf("La suma de los elementos del arreglo es %f \n", suma);
}
