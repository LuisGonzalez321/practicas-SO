#include<stdio.h>

void main(){
  char *nombre;

  printf("Ingrese su nombre: ");
  fgets(nombre, 50, stdin);

  printf("%s, bienvenido a linux", nombre);

}
