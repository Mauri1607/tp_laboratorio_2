#include <stdio.h>
#include <string.h>
#include "funciones.h"

// HACER ALTA, BAJA, (USAR BANDERAS PARA SABER SI ESTA DISPONIBLE O NO)... Graficar Verticalmente con ***...

void Ordenar(EPersona persona[], int length )
{
    int i, k;

    for(i = 0; i<length; i++)
    {
        for(k = i+1; k<length; k++)
        {
            if(strcmp(persona[i].nombre, persona[k].nombre) > 0)
            EPersona persAux[1];
            persAux[0] = persona[k];
            persona[k] = persona[i];
            persona[i] = persAux[0];
        }
    }
}
