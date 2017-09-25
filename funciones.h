#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "funciones.c"

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    long dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[], int length);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int length, int dni);

/**
 * Agrega un nuevo elemento al array.
 * @param lista el array se pasa como parametro.
 * @param indice del array donde se guardaran los datos se pasa como parametro.
 */
void PersonaAdd(EPersona lista[index]);

/**
 * Borra un elemento del array.
 * @param lista el array se pasa como parametro.
 */
void PersonaDelete(EPersona lista[]);

/**
 * Imprime el array.
 * @param lista el array se pasa como parametro.
 */
void PersonaPrint(EPersona lista[]);

/**
 * Ordena el array.
 * @param lista el array se pasa como parametro.
 * @param la longitud del array se pasa como parametro.
 */
void PersonaSort(EPersona lista[], int length);

#endif // FUNCIONES_H_INCLUDED
