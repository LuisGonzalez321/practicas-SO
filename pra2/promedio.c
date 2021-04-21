#include<stdio.h>

void main (){

//Variables
float numero=0;
float acumulador=0;
int contador=0;
float promedio=0;
//Indicar que hace el programa
puts("ESTE PROGRAMA CALCULA EL PROMEDIO DE N NUMEROS POSITIVOS");
//Leer datos
while (numero >= 0)
{
 printf("Ingrese un numero (-1 para terminar): ");
 scanf("%f",&numero);
 if (numero >= 0)
 {
 acumulador = acumulador + numero;
 contador++;
 }
}
//Procesar
if (contador != 0)
 promedio= acumulador/contador;
//Mostrar resultados
printf("El promedio de los %d numeros es %f\n", contador,
 promedio);
} 
