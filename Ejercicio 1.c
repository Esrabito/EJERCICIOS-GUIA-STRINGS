//Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cuántas letras tiene la palabra ingresada.
//Por ejemplo "CASA" debe indicar 4 letras.

#include <stdio.h>



main (){
	int i = 0; //Declaramos variables que utilizaremos.
	char Palabra[20];
	
	printf("Ingrese una palabra (Maximo 20 caracteres): ");
	gets(Palabra);

	while (Palabra[i] != 0){//Utilizamos el While como una especie de for para que, la variable "i" Sea el contador de las letras ya que, al llegar a la posicion 5 del vector no habrá ningun carácter por ende, habrá un valor NULL o 0 y nos sacará del while.
		i++;
	}
	
	printf("La palabra tiene %d Letras", i);
	
	
	getchar();
	return 0;
}
