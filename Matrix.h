/*
 * Copyright (C) 2016 Mohamed Rashad
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef MATRIX_H
#define MATRIX_H

#include "logical_operators.h"

class Matrix {
public:

    Matrix();
    Matrix(int, int);
    virtual ~Matrix();

    int width, height;
    int twoByTwo[2][2], threeByThree[3][3];

    int** genericMatrix;

};

#endif /* MATRIXITSELF_H */

