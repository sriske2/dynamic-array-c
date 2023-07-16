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

#include"vector.h"

/* internal functions */
void vector_expand(Vector * vec);

/* implementations */
Vector vector_create() {
    Vector c = {0, 3};
    return c;
}

void vector_add(Vector * vec) {

}