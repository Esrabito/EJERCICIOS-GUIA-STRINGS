//El usuario ingresará 5 nombres de personas y sus edades (número entero). 
//Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona más joven.
//El ingreso se realiza de este modo: nombre y edad de la primera persona, luego nombre y edad de la segunda, etc...
//Nota: no hay que almacenar todos los nombres y todas las notas.

#include <stdio.h>
#include <string.h>  


main()
{
    
    int i;
    char NombreJoven[250]; 
    char auxiliar[250];       //Creo variables para utilizarlas luego
    int EdadJoven;   
    int EdadAuxiliar;
    
    
    for(i=0;i<=2;i++)      //Utilzo un for para poder pedir el ingreso de los nombres y las edades, para luego guardarlo.
    {
        printf("\ningrese el nombre de la persona N%d:",i+1);
        scanf("%s",&auxiliar);
        
        printf("\ningrese la edad de la persona N%d:",i+1);
        scanf("%d",&EdadAuxiliar);
        
        if(i==0)
        
        EdadJoven = EdadAuxiliar;  
        
        
        if(EdadAuxiliar < EdadJoven)
        {
            EdadJoven = EdadAuxiliar;
            strcpy(NombreJoven,auxiliar);  //Utilizo el strcpy para copiar lo que hay dentro de la variable "NombreJoven".
        }
    }
    
    
    printf("la persona mas joven se llama: %s",NombreJoven); 
    
    getchar();
    return 0;
    
}
