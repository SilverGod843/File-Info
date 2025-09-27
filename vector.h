#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h>



typedef struct {
	void* data;
	size_t capacity;
	size_t size;
	size_t el_size;
} Vector;

#define vector_init(type) (Vector) {\
	.data = malloc(sizeof(type)), \
	.size = 0, \
	.capacity = 1, \
	.el_size = sizeof(type) \
}

void* vector_get(Vector* v,size_t index);
void vector_resize(Vector* v);
void vector_push_back(Vector* v,void* x);
void vector_pop_back(Vector* v);


#endif
