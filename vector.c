/*
    Copyright (C) 2023 Skyler Riske

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#include<stdio.h>
#include<stdlib.h>
#include"vector.h"

/* internal functions */
void vector_expand(Vector * vec);

/* implementations */
Vector vector_create() {
    size_t size = 0;
    size_t capacity = 2;
    Vector new_vec = {size, capacity, malloc(sizeof(void *) * capacity)};
    return new_vec;
}

void vector_clear(Vector * vec) {
    void ** cleared_data = realloc(vec->data, sizeof(void *));
    vec->data = cleared_data;
}

bool vector_contains(Vector * vec) {
    return false;
}

void * vector_get(Vector * vec, int index) {
    if (index >= vector_size(vec) - 1) return NULL;
    if (index < 0) return NULL;
    return *(vec->data + index);
}

void vector_delete(Vector * vec) {
    /*if (!vector_is_empty(vec)) {
        for (size_t ii = 0; ii < vec->size; ii++) {
            *(vec->data + ii) = NULL;
            free(vec->data + ii);
        }
    }*/
    vec->data = NULL;
    free(vec->data);
    vec = NULL;
    free(vec);
}

void vector_expand(Vector * vec) {
    size_t new_size = (size_t) (vec->capacity * 1.5); /* Aim for +50% capacity each expansion. */
    vec->capacity = new_size;
    void ** new_data = realloc(vec->data, vec->capacity * sizeof(void*));
    vec->data = new_data;
}

void vector_add(Vector * vec, void * item) {
    if (vec->size >= vec->capacity) {
        vector_expand(vec);
    }
    *(vec->data + vec->size) = item;

    vec->size += 1;
}

bool vector_is_empty(Vector * vec) {
    return (vec->size <= 0);
}

size_t vector_size(Vector * vec) {
    return vec->size;
}

void vector_print(Vector * vec) {
    /* Assumes that the data are integers here. */
    for (size_t ii = 0; ii < vec->size; ii++) {
        printf("%d ", *((int *) *(vec->data + ii)));
    }
    printf("\n");
}