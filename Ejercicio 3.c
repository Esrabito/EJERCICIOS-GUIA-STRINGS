#include <stdio.h>

int Comparar (char s1[100], char s2[100]){
    int i;
    for(i=0;(s1 [i]==s2[i]) &&(s1 [i] != '\0') && (s2[i] != '\0') ; i++); // Creo la funcion "Comparar" para trabajar comodamente, en la cual hay un for que me permite comparar caracter por caracter de cada string y además ver si es distinto de \0 (El ultimo caracter).
    return (s1[i]-s2[i]);
}
 
int main(){
	int Resultado;
    char a[100],b[100];
         puts("Ingrese el primer string:");	//Utilizo puts y gets para mostrar en pantalla los mensajes y guardar lo ingresado por el usuario.
         gets(a);
         puts("Ingrese el segundo string:");
         gets(b);
         
    Resultado = Comparar(a,b); // Llamo a la funcion Comparar donde obtengo el resultado "0" Si las dos cadenas son iguales o la diferencia de las dos cadenas si son distintas (Este algoritmo tiene un funcionamiento parecido al strcmp).
    
    if (Resultado == 0){ // Pregunto por 0 para confirmar que los strings son iguales, de lo contrario (Ser distinto de 0), me mostrará que los strings son distintos.
    	puts("Los strings son iguales");
	}else{
		puts("Los strings son distintos");
	}
	
	getchar();
	return 0;
	
}
