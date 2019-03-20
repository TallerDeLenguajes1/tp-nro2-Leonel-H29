#include <stdio.h>
#include <stdlib.h>

int main(){
	int buff[5]={5,15,30,10,35};
	int i=0;
	int *p;
	p=buff;
	puts("Accediendo a cada uno de los elementos del arreglo con notacion subindexada");
	for(i=0; i<5;i++){
		Caso1
		printf("[ %d ] ", buff[i]);
	}
	puts("Accediendo a cada uno de los elementos del arreglo con aritmetica de punteos");
	for(i=0; i<5;i++){
		printf("[ %d ] ", *(p+i));
	}
	puts("Accediendo a cada uno de los elementos del arreglo mediante el puntero");
	for(i=0; i<5;i++){
		//Caso2
		printf("[ %d ] ", *(buff+i));
	}
	puts("La direccion de memoria de cada uno de los elementos del arreglo mediante el puntero");
	for(i=0; i<5;i++){
		printf("[ %p ] ", *(buff+i));
	}
	printf("Tamaño del puntero: %d\nTamaño del areglo: %d\n",sizeof(p),sizeof(buff));
	return 0;
}