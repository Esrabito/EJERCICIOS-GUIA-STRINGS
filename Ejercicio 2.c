//Permitir el ingreso de una palabra y mostrarla en pantalla al revés.
//Por ejemplo, para "CASA" se debe mostrar "ASAC".

#include <stdio.h>


main (){
	
char Palabra[100];
char PalabraReves[100];	//Declaramos variables que utilizaremos.
int i = 0;
int aux = 0;
int b = 0;
	printf("Ingrese una palabra: ");
	gets(Palabra);

	while (Palabra[i] != 0){	//Utilizo el While nuevamente para poder almacenar la cantidad de letras que hay en la variable "Palabra" ayudandome con la variable "i".
	i++;			
	}



	for(i; i>= 0; i--){
		PalabraReves[aux] = Palabra[i];
		printf("%c", PalabraReves[aux]);	//Utilizo la variable "PalabraReves" junto con la variable "aux" para guardas las letras al reves, Teniendo en un caso caso (Siendo la palabra ingresada hola), i=4, aux=0, Por ende a medida que baja i sube aux y así se intercambian de lugar las letras.
		aux++;
	}

	getchar();
	return 0;
}
