#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

typedef struct{
	void **data; //Aqui se almacenan los elementos genericos
	int size; //Numeros de elementos que tiene la lista almacenados
	int capacity; //Capacidad maxima de objetos que pueden almacenar la lista
	int element_size; //Tamano en bytes de cada elemento
}ArrayList;

//Constructor y destructor
//Constructor -> Inicializa variables enn sus valores por defecto y pide memoria para almacenarse
//Constructor -> Realiza las liberaciones de memoria para que el 0S pueda volver a usarla

ArrayList* arraylist_create(int initial_capacity, int element_size);
void arraylist_destroy(ArrayList *list);

//Operaciones basicas que toda lista debe llevar
void arraylist_add (ArrayList *list,void *element);//Agrega un elemento final de la lista
void arraylist_insert(ArrayList *list, void *element,int index);//Agega un elemento a la posicion deseada(index)
void *arraylist_get(ArrayList *list,int index);//Obtenemos el elemento de la posicion index de la lista
int arraylist_remove(ArrayList *list,int index);//Se quita el elemento en la posicion index de la lista
void arraylist_clear(ArrayList *list);//Se borran tods los elementos de la lista

//Funciones usadas para manipular los arreglos dinamicos
void arraylist_ensure_capacity(ArrayList *list, int min_capacity);//Pide mas memoria si se esta llenando
void arraylist_trim_clone(ArrayList *list);//Ajusta el tamano dinamico al usado por los elementos
ArrayList* arraylist_clone(ArrayList *list);//Nos sirve para copiar una lista a otra

#endif
