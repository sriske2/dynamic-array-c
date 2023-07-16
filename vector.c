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
    size_t capacity = 1;
    Vector new_vec = {size, capacity, malloc(sizeof(void *) * capacity)};
    return new_vec;
}

void vector_expand(Vector * vec) {
    size_t new_size = vec->capacity + (vec->capacity * 1.5); /* Aim for +50% capacity */
    vec->capacity = new_size;

    vec->data = realloc(vec->data, vec->capacity);

}

void vector_add(Vector * vec, void * item) {
    if (vec->size >= vec->capacity) {
        vector_expand(vec);
    }
    *(vec->data + vec->size) = item;
    
    vec->size += 1;
}

void vector_print(Vector * vec) {
    /* Assumes that the data are integers. */
    for (size_t ii = 0; ii < vec->size; ii++) {
        printf("%d ", *((int *) *(vec->data + ii)));
    }
    printf("\n");
}