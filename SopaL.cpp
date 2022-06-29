#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar (char palabras[10][50])
{
	int f;
	for(f=0; f<10;f++){
		printf("Ingrese la palabra: ");
		gets(palabras[f]);
	}
}

void imprimir(char palabras[10][50]){
	int f;
	printf("Las palabras ingresadas son:\n");
	
	for(f=0; f<10;f++){
		printf("%s\n", palabras[f]);
		}
	
	
}

void consulta(char palabras[10][50]){
	int f;
	char pal[50];
	int existe=0;
	printf("Ingrese la palabra a buscar: ");
	gets(pal);
	for(f=0;f<10;f++){
		if(strcmp(pal,palabras[f])==0){
			existe=1;
		}
	}
//Elfego Adair Juarez Arias UAEMEX
	
	if(existe==1){
		printf("La palabra esta en la matriz");
	} else{
		printf("La palabra no esta en la matriz");
	}
}

int main()
{
	
	char palabras[10][50];
	cargar(palabras);
	imprimir(palabras);
	consulta(palabras);
	getch();
	return 0;
}
