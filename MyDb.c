/*
 ============================================================================
 Name        : MyDb.c
 Author      : yomero
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define WRITE_TEXT "wt"
#define READ_TEXT "rt"

int NewArch();

int main(void) {
	printf("<< Sistema MyDB>>\n");
	printf("1. Clientes\n");
	printf("2. Cuentas\n");
	printf("3. Transacciones\n");
	printf("4. Salir\n");
	int R1;
	setbuf(stdout, NULL);
	scanf("%d", &R1);
	do{
		printf("%d", R1);
		break;
	}while (R1 <4);
	return sd;
}


void NewArch(int R1){
	FILE *pf;//Creando puntero a archivo
	char path1[] = "C:\\Users\\Gabriel Orlando\\Desktop\\My_DB\\clientes.dat";
	char path2[] = "C:\\Users\\Gabriel Orlando\Desktop\\My_DB\\cuentas.dat";
	char path3[] = "C:\\Users\\Gabriel Orlando\Desktop\\My_DB\\transacciones.dat";
	switch(R1){
	case 1:
		pf = fopen(path1,"rb+");
		if(pf==NULL){
			printf("No existe el archivo");
			pf = fopen(path1,"wb+");
		}
		//funcion a clientes
		fclose(pf);
		break;
	case 2:
		pf = fopen(path2,"r+");
		//funcion a clientes
		break;
	case 3:
		pf = fopen(path3,"r+");
		//funcion a clientes
		break;
	}

}
