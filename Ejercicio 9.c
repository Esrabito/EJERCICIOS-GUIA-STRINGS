//El usuario ingresar� una palabra de hasta 10 letras. Se desea mostrarla en pantalla pero encriptada seg�n el "C�digo C�sar".
//Esto consiste en reemplazar cada letra con la tercera consecutiva en el abecedario. Por ejemplo, "CASA" se convierte en "FDVD".
//Tener en cuenta que las �ltimas letras deben volver al inicio, por ejemplo la Y se convierte B.
//Este mecanismo se utilizaba en el Imperio Romano.

#include <stdio.h>
#include<string.h>  


int main()
{   
    
    char string[10]; 
    int i;
    printf("Escribir palabra a codificar: ");
    
    for(i=0;i<10;i++)    //la palabra va a ser de maximo 10 letras
    
    {
        if((string[i]=getchar()) == '\n')  // al mandar a la entrada un enter finaliza con el bucle.
        break;
    
    
    //condiciones a aplicar en las letras x,y,z y X,Y,Z
    
    else if(string[i]==120) // letra 'x'
    
        string[i]=97;
        
    else if(string[i]==121)// letra 'y'
    
        string[i]=98;
        
        
    else if(string[i]==122)// letra 'z'
    
        string[i]=99;
        
    else if(string[i]==88)// letra 'X'
    
        string[i]=65;
        
    else if(string[i]==89)// letra 'Y'

        string[i]=66;
        
    else if(string[i]==90)// letra 'Z'
    
        string[i]=67;
        
    else
    {
        string[i] += 3;    //le sumamos 3 posiciones en referencia a la tabla ascii
    }
    }
    
    printf("la palabra transformada es: %s",string);
    
    
    getchar();
    return 0;
    
   
}

