#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Fil 15 //Cantidad de filas
void Cargar_Matriz(int *punt, int cont_col, int cont_fil, int cant_col);
void Mostrar_Matriz(int *punt, int cont_col, int cont_fil, int cant_col);
void Num_pares(int *punt, int cont_col, int cont_fil, int cant_col);
int main(){
	int cont_col/*Contador de columas*/, cont_fil/*Contador de filas*/, cant_col = 5+rand()%(16-5);/*Cantidad de columas*/
	int matriz[Fil][cant_col];
	srand(time(NULL));
	
	Cargar_Matriz(&matriz[0][0], cont_col, cont_fil, cant_col);
	puts("-- La matriz: \n\n");
	Mostrar_Matriz(&matriz[0][0], cont_col, cont_fil, cant_col);
	Num_pares(&matriz[0][0], cont_col, cont_fil, cant_col);
	return 0;
}
void Cargar_Matriz(int *punt, int cont_col, int cont_fil, int cant_col){
	int i=0;
	for (cont_fil = 0; cont_fil < Fil ; ++cont_fil){
		for (cont_col = 0; cont_col < cant_col; ++cont_col){
			*(punt+i) = 100+rand()%(1000-100);
			i++;
		}
	}
}
void Mostrar_Matriz(int *punt, int cont_col, int cont_fil, int cant_col){
	int i=0;
	for (cont_fil = 0; cont_fil < Fil ; ++cont_fil){
		for (cont_col = 0; cont_col < cant_col; ++cont_col){
			printf("[ %d ]", *(punt+i));
			i++;
		}
		printf("\n");
	}
	printf("\n");
	printf("Cantidad de filas: %d\n", Fil);
	printf("Cantidad de columas: %d\n", cant_col);
}

void Num_pares(int *punt, int cont_col, int cont_fil, int cant_col){
	int i=0, cont_pares=0, k=0;
	int vector_pares[Fil];

	for (cont_fil = 0; cont_fil < Fil ; ++cont_fil){
		for (cont_col = 0; cont_col < cant_col; ++cont_col){
			if ((punt[i]%2)==0){
				cont_pares++;
				i++;
			}
		}
		printf("\n");
		printf("--Cantidad de pares en la fila [%d]: %d\n", k+1, cont_pares );
		vector_pares[k] = cont_pares;
		k++;
	}
	printf("--Vector: \n");
	for (int i = 0; i < Fil; ++i){
		printf(" [%d] ", vector_pares[i] );
	}
}