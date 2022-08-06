//El usuario ingresa una palabra. Mostrar en pantalla cuántas letras A minúsculas contiene.

#include <stdio.h>


main(){
	
	
char Palabra[50];
int contador=0, i; // Creamos variables para utilizarlas luego.

	puts("Ingrese Palabra:"); //Pedimos al usuario el ingreso de una palabra.
	gets(Palabra);	
	
for(i=0;i<=49;i++){
	if (Palabra[i] == 97 && Palabra[i] != '\0'){ //Recorremos el string y comparamos con el numero 97 (Que es la letra A minúscula) y cada vez que se cumpla la condición nos aumenta el contador.
		contador++;
	}

}
	
	printf("La palabra tiene %d A minusculas", contador); //Mostramos el contador con la cantidad de A minúscula que contiene la palabra.
	
}
