#include <stdlib.h>
#include <stdio.h>
#include "vector.h"
#include <string.h>

#define vector_init(type) (Vector) {\
	.data = malloc(sizeof(type)), \
	.size = 0, \
	.capacity = 1, \
	.el_size = sizeof(type) \
}

void* vector_get(Vector* v,size_t index) {
	if (index >= v->size) {
		fprintf(stderr,"Vector index is out of range!");
		return NULL;
	}
	return (char*)v->data+v->el_size*index;
}

void vector_resize(Vector* v) {
	v->capacity *= 2;
	v->data = realloc(v->data,v->capacity*v->el_size);
}

void vector_push_back(Vector* v,void* x) {
	if (v->size >= v->capacity) {
		vector_resize(v);
	}

	void* next = (char*)v->data + v->el_size * v->size;
	memcpy(next,x,v->el_size);
	v->size++;
}

void vector_pop_back(Vector* v) {
	if (v->size == 0) {
		fprintf(stderr,"Vector index is out of range!\n");
		return;
	}
	v->size--;
}

void vector_display(Vector* v) {
	
}
