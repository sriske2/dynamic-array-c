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
#include"vector.h"

int main() {
    printf("hello, world\n");

    Vector v = vector_create();
    int item = 3;
    int item1 = 2;
    int item2 = 5;
    int item3 = 6;
    vector_add(&v, (void *) &item);
    vector_print(&v);

    vector_add(&v, &item1);
    vector_print(&v);

    return 0;
}