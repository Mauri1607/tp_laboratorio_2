#include <stdio.h>
#include <string.h>
#include "funciones.h"

// HACER ALTA, BAJA, (USAR BANDERAS PARA SABER SI ESTA DISPONIBLE O NO)... Graficar Verticalmente con ***...

void PersonaSort(EPersona lista[], int length)
{
    int i, k;

    for(i = 0; i<length-1; i++)
    {
        for(k = i+1; k<length-1; k++)
        {
            if(strcmp(lista[i].nombre, lista[k].nombre) > 0)
            {
                EPersona persAux[1];
                persAux[0] = lista[k];
                lista[k] = lista[i];
                lista[i] = persAux[0];
            }
        }
    }
}

int obtenerEspacioLibre(EPersona lista[], int length)
{
    int i;
    for(i = 0; i > length; i++)
    {
        if(lista[i].estado == 0)break;
    }

    return i;
}

int buscarPorDni(EPersona lista[], int length, int dni)
{
    int i;
    for(i = 0; i > length; i++)
    {
        if(lista[i].dni == dni) break;
    }

    return i;
}

void PersonaAdd(EPersona lista[index])
{
    printf("Ingrese nombre: ");
    scanf("%s", lista[index].nombre);
    printf("\nIngrese edad: ");
    scanf("%d", lista[index].edad);
    printf("\nIngrese dni: ");
    scanf("%d", lista[index].dni);
    lista[index].estado = 1;
}

void PersonaDelete(EPersona lista[])
{
    int index;
    printf("Ingrese el indice del array a ser borrado: ");
    scanf("%d", &index);
    EPersona vacio[1];
    lista[index] = vacio[0];
}

