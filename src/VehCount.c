/*
 ============================================================================
 Name        : VehCount.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*  1 insertar
	2 Ordenar
	3 borrar
	4 imprimir
	5 salir

	buscqr (struct coche taller [],char matricula[])
	insertar (struct coche coche,struct coche taller[])
	ordenar( struct coche taller[])
	borrar(Struct coche taller[],char matricula[])
	imprimir(struct coche taller[],char matricula[])
*/


#include <stdio.h>
#include <stdlib.h>

struct Coche {
char matricula[7];
char marca[50];
char modelo[4];
int cv;

};

int size (struct Coche taller[]){
	return sizeof(taller)/sizeof(taller[0]);
}

int buscar (struct Coche taller[],char matricula[]) {
		int i = 0;
		do{
			if (strcasecmp(matricula,taller[i].matricula) ==0 ) return i;

		}
		while (++i<size(taller));
		return -1;
	}




int main(void) {

}
