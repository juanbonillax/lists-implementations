#include <stdio.h>
#include "array_list.h"

int main() {
	
	// 3.1 Crear la lista con capacidad mínima de 3 y elementos tipo int
	ArrayList *myArrayList = arraylist_create(3, sizeof(int));
	if (!myArrayList) {
		printf("Error al crear la lista.\n");
		return 1;
	}
	
	// Elementos para agregar
	int a = 10, b = 20, c = 30, d = 40, e = 50;
	
	// 3.2 Agregar 4 elementos con arraylist_add
	arraylist_add(myArrayList, &a);
	arraylist_add(myArrayList, &b);
	arraylist_add(myArrayList, &c);
	arraylist_add(myArrayList, &d);
	
	// Insertar 1 elemento con arraylist_insert (pos 2)
	arraylist_insert(myArrayList, &e, 2);
	
	// 3.3 Obtener un elemento e imprimirlo
	int *value = (int*)arraylist_get(myArrayList, 2);
	if (value != NULL) {
		printf("Elemento en la posición 2: %d\n", *value);
	} else {
		printf("No se pudo obtener el elemento.\n");
	}
	
	// 3.4 Remover 2 elementos
	arraylist_remove(myArrayList, 1);  // elimina el elemento en pos 1
	arraylist_remove(myArrayList, 2);  // elimina el nuevo elemento en pos 2
	
	// 3.5 Destruir la lista
	arraylist_destroy(myArrayList);
	
	return 0;
}
