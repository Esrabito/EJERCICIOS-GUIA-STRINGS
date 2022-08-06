//El usuario ingresa una palabra. Mostrar en pantalla cuántas vocales minúsculas y mayúsculas contiene
#include <stdio.h>



main (){
	
	char Palabra[100]; // Declaro las variables para utilizar luego.
	int contadorMinus = 0, contadorMayus = 0, i;
	
	puts("Ingrese la palabra:"); // Pido al usuario el ingreso de la palabra para luego guardarla.
	gets(Palabra);
	
	for (i=0; i<=99;i++){
		
		if(Palabra[i] == 97 || Palabra[i] == 101|| Palabra[i] == 105 || Palabra[i] == 111 || Palabra[i] == 117){	//Con el bucle for lo que hago es recorrer el string caraácter por carácter para compararlo con todas las vocales minúsculas y maúsculas, si hay alguna coincidencia se aumentará el contador.
			contadorMinus++;
		}
		
		if(Palabra[i] == 65 || Palabra[i] == 69 || Palabra[i] == 73 || Palabra[i] == 79 || Palabra[i] == 85){
			contadorMayus++;
		}
	}
	
	printf("La palabra ingresada contiene %d vocales mayusculas y %d vocales minusculas", contadorMayus, contadorMinus); // Muestro en pantalla la cantidad de vocales tanto minúsculas como mayúsculas
	
	
	
	getchar();
	return 0;
	
}
