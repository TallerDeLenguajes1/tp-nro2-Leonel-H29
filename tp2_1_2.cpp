#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define N 4
#define M 5
void Ing_Datos_Matriz(double *punt, int f, int c);
void Mostrar_Datos_Matriz(double *punt, int f, int c);
int main(){
	int f,c;
    double mt[N][M];
    srand(time(NULL));
    
    Ing_Datos_Matriz(&mt[0][0] , f, c);
    Mostrar_Datos_Matriz(&mt[0][0] , f, c);
    
    //Datos de la matriz
    printf("\n");
    printf("Direccion de la memoria de la matriz: %p\n", mt);
    printf("Tamanio en bytes  de la matriz: %d\n", sizeof(mt));
	
	return 0;  
}

void Ing_Datos_Matriz(double *punt, int f, int c){
	int k=0;
	for(f=0;f<N; f++){
		for(c= 0;c<M; c++){
			*(punt+k) = 1 + rand()%(9);
			k++;
		}
	}
}
void Mostrar_Datos_Matriz(double *punt, int f, int c){
	int k=0;
	for(f = 0;f<N; f++){
		for(c = 0;c<M; c++){
			printf("[ %.1lf ]", *(punt+k));
			k++;
		}
		printf("\n");
	}
	printf("\n");
    printf("Direccion de la memoria del puntero: %p\n", punt);
    printf("Tamanio en bytes  del puntero: %d\n", sizeof(punt));
}

