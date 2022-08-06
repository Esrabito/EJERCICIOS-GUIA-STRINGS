//El usuario ingresará nombres de personas hasta que ingrese la palabra "FIN". No sabemos cuántos nombres ingresará.
//Luego de finalizar el ingreso, mostrar en pantalla cuál es el primer nombre en orden alfabético de todos los ingresados.

#include <stdio.h>
#include<string.h>   

int main()
{
    char aux[200]; // Creo variables para utilizarlas luego.
    char str[200];
    char PalabraFin[4] = {'F', 'I', 'N', '\0'};
	

        
    while(strcmp(aux, PalabraFin) != 0){
    	puts("Ingresar nombre de la persona:"); //Pido el ingreso de nombres y los guardo en la variable auxiliar y, ademas, cuando se ingrese la palabra "FIN" saldra del while.
    	gets(aux);
    	
    	
    	if(strcmp(aux, PalabraFin) != 0) {
    		
    		if(strcmp(aux,str)<0){			
    			strcpy(str,aux);
			}
    		
		}
    	
	}

printf("El primer nombre en orden alfabetico es: %s",str);

	getchar();
	return 0;

}
