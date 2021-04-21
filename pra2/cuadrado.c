#include<stdio.h>

void main (){
   //Variables
   int numero;
   float resultado;
   //Indicar que hace el programa
   puts("ESTE PROGRAMA CALCULA EL CUADRADO DE UN NUMERO");
   //Leer datos
   printf("Ingrese un numero: ");
   scanf("%d",&numero);

   //Procesar
   resultado = numero * numero;
   //Mostrar resultados
   printf("El cuadrado de %d es %f\n", numero, resultado);
}
