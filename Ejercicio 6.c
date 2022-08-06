//El usuario ingresa una palabra. Determinar qué letra aparece mayor cantidad de veces. Para simplificar el problema, trabaje solo con mayúsculas.

#include <stdio.h>

// No pude terminar el 6, es el unico que falta, te dejo hasta donde llegue, tengo un problema en el cual no me muestra nada en pantalla, simplemente ingreso y no pasa nada
// Si encontras el error y me lo marcas super agradecido profe.


int Comparar (char s1[100], int s2[26]){
    int i, j, contador=0, Mayor, Posicion, auxNumero[50];
    char auxLetra[50];
    
    for(i=0; i<=99; i++){
    	
    	contador = 0;
    	
    	for(j=0;j<=25;j++){
	
		if (s1[i] == s2[j+i]){
		contador++;
		}
		auxLetra[i] = s1[i];
		auxNumero[i] = contador;
				
		}
	}
	
	for(i=0; i<=99;i++){
		for(j=0;j<=26;j++){
			
			if(auxNumero[i] >= auxNumero[i+1]){
				Mayor = auxNumero[i];
				Posicion = auxLetra[i];
			}
		}
	}
	
	return(Posicion);
} 
    

int main (){
	int i;
	char Palabra[100];
	int Comparador[26] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90}; ;
	
	int Letra;
	
	puts("Ingrese una palabra");
	gets(Palabra);	
	
	for (i=0; i<=99; i++){
		Comparador[i] = Palabra[i];
	}
	
	Letra = Comparar(Palabra, Comparador);
	
	printf("La letra que se repite mas veces es la: %c", Letra);
	
	getchar();
	return 0;
}
