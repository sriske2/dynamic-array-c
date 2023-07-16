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

int main() {
    printf("hello, world\n");

    Vector v = vector_create();
    int item = 3;
    int item1 = 2;
    int item2 = 5;
    int * item3 = malloc(sizeof(int));
    *item3 = 22;
    
    vector_add(&v, (void *) item3);
    vector_print(&v);

    vector_add(&v, (void *) &item);
    vector_print(&v);

        vector_add(&v, (void *) &item2);
    vector_print(&v);

    vector_add(&v, (void * )&item1);
    vector_print(&v);

    printf("%d\n", *(int*)vector_get(&v, 1));

    /* allocation test */
    /*
    for (int i = 0; i < 10000; i++) {
        int * item = malloc(sizeof(int));
        *item = i;
        vector_add(&v, (void *) item);
        // printf("%zu ", v.capacity);
    }
    printf("\n");
    vector_print(&v);*/

    vector_delete(&v);
    return 0;
}