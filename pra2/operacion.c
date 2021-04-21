#include<stdio.h>


int maximo(int data[], int cantidad){
   int i = 0;
   int maximo;
   for(i = 0; i < cantidad - 1 ; i++){
     if(data[i] > data[i + 1]){
        maximo = data[i];
     }else{
	maximo = data[i + 1];
     }
   }

   return maximo;
}

int minimo(int data[], int cantidad){
   int i = 0;
   int minimo = 0;

   for(i = 0; i < cantidad - 1; i++){
     if(data[i] < data[i + 1]){;
	minimo = data[i];
     }else{
	minimo = data[i + 1];     
     }
   }
   return minimo;
}

float promedio(int data[], int cantidad){

   int i = 0;
   int suma = 0;

   for (i = 0; i < cantidad; i++){
      suma += data[i];
   }

   return suma / cantidad;
}

void main(){
   
   int i = 0;
   int cantidad = 0;
   int data[cantidad];
   printf("Ingrese la cantidad de numeros que tendra el arreglo");
   scanf("%d", &cantidad);


   for(i = 0; i < cantidad - 1; i++){
     printf("Ingrese el elemento %d", ( i + 1 ));
     scanf("%d", &data[i]);
   }

   int max = maximo(data, cantidad);
   int min = minimo(data, cantidad);
   float avg_ = promedio(data, cantidad); 


   printf("El maximo es: %d", max);
   printf("El minimo es : %d", min);
   printf("El promedio es: %f", avg_);

}
