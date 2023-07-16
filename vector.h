/*
    List
        add
        clear
        contains
        get
        indexOf
        isEmpty
        remove
        set
        size
        print
*/
#pragma once
#ifndef VECTOR_H
#define VECTOR_H

typedef struct Vector {
    size_t size;
    size_t capacity;
} Vector;

/* construction methods */

/* use methods */
void vector_add(Vector * vec);
void vector_clear(Vector * vec);
bool vector_contains(Vector * vec);
void * vector_get(Vector * vec, int index);
int vector_index_of(Vector * vec, void * item);
bool vector_is_empty(Vector * vec);
void vector_remove(Vector * vec);
void vector_set(Vector * vec);
size_t vector_size(Vector * vec);
void vector_print(Vector * vec);


#endif