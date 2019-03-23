#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<iostream>
#define N 4 //Filas
#define M 5 //Columnas
//*((*mt +f ) +c)
void Ing_Datos_Matriz(double *punt, int f, int c);
void Mostrar_Datos_Matriz(double *punt, int f, int c);
int main(){
	int f,c; //F=Filas, C=Columnas
    double mt[N][M]; //Matriz
    srand(time(NULL));
    Ing_Datos_Matriz(&mt[0][0], f,c);
    puts("La Matriz es: ");
    Mostrar_Datos_Matriz(&mt[0][0], f,c);
    printf("\n");
    printf("Direccion de memoria de la matriz: %p\n", mt);
	printf("Tamanio en  bytes: %d\n", sizeof(mt));
	return 0;  
}

void Ing_Datos_Matriz(double *punt, int f, int c){
	int k=0;
	for(f=0;f<N; f++){
		for(c= 0;c<M; c++){
			//mt[0][0] = 1+rand()%(9);
			*(punt+k) = 1+rand()%(9);
			k++;
		}
	}
}
void Mostrar_Datos_Matriz(double *punt, int f, int c){
	int k=0;
	for(f=0;f<N; f++){
		for(c= 0;c<M; c++){
			//printf("[ %.2lf ]", *((*mt +f ) +c));
			printf("[ %.2lf ]", *(punt+k));
			k++;
		}
		printf("\n");
	}
	printf("Direccion de memoria del puntero: %p\n", punt);
	printf("Tamanio en  bytes: %d\n", sizeof(punt));
}
