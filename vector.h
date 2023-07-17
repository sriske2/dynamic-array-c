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

#pragma once
#ifndef VECTOR_H
#define VECTOR_H

#include<stdbool.h>
#include<stddef.h>

typedef struct Vector {
    size_t size;
    size_t capacity;
    void ** data;
} Vector;

#define CAPACITY_DEFAULT 2

/* usage functions */
Vector vector_create();
void vector_delete(Vector * vec);
void vector_add(Vector * vec, void * item);
void vector_clear(Vector * vec);
bool vector_contains(Vector * vec, void * item);
void * vector_get(Vector * vec, int index);
int vector_index_of(Vector * vec, void * item);
bool vector_is_empty(Vector * vec);
void vector_remove(Vector * vec, void * item);
void vector_set(Vector * vec, void * item, int index);
size_t vector_size(Vector * vec);
void vector_print_int(Vector * vec);

#endif
