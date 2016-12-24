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

#include <iostream>

#include "logical_operators.h"
#include "AdvancedMatrixOperations.h"

using namespace std;

int main() {

    AdvancedMatrixOperations advancedMatrix;
    short choice;
    char decide;

    cout << "Awesome Matrix Calculator" << endl;
    cout << "-------------------------" << endl;
    cout << "What do you want to do ?" << endl << endl;
    cout << "Basic :" << endl;
    cout << "\t1 - Addition" << endl;
    cout << "\t2 - Subtraction" << endl;
    cout << "\t3 - Multiplication" << endl;
    cout << "\t4 - Scalar Multiplication" << endl;
    cout << "Advanced :" << endl;
    cout << "\t5 - Transpose" << endl;
    cout << "\t6 - Determinant" << endl << endl;
    cout << "Your Choice >> ";

    cin >> choice;

    switch (choice) {

        case 1:
            advancedMatrix.matrixAddition();
            break;

        case 2:
            advancedMatrix.matrixSubraction();
            break;

        case 3:
            advancedMatrix.matrixMultiplication();
            break;

        case 4:
            advancedMatrix.matrixScalarMultiplication();
            break;

        case 5:
            advancedMatrix.traspose();
            break;

        case 6:
            advancedMatrix.determinant();
            break;

        default:
            cout << "Wrong Choice, I can't help you..";
            break;

    }


    return 0;
}




