#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
 
FILE *archivo;
char VENTASa[50]="Ventas.txt";
 
void insertarProductoVenta(char producto[], char producto2[], int precio_VENTA){
	archivo = fopen(VENTASa,"a");
	fprintf(archivo,"%s %s %i \n",producto, producto2, precio_VENTA);
	fclose(archivo);
	archivo = NULL;
}
void listarProductosStock(){
	char producto[50], producto2[50];
	int precio_VENTA;
	archivo = fopen(VENTASa,"r");
	if(archivo != NULL){
		while(!feof(archivo)){
			fscanf(archivo, "%s %s %i \n",producto,producto2,&precio_VENTA);
			printf("%s %s %i\n",producto,producto2,precio_VENTA);
		}
 
	}
	fclose(archivo);
	archivo = NULL;
}
