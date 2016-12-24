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
#include "BasicMatrixOperations.h"
#include "Matrix.h"

void BasicMatrixOperations::matrixAddition() {

    short choice;
    cout << "1 - 2x2 Addition" << endl;
    cout << "2 - 3x3 Addition" << endl;
    cout << "3 - user-defined Addition" << endl;
    cout << "Your choice >> " << endl;

    cin >> choice;

    if (choice _equals_ 1) {

        Matrix m1, m2, m3;


        //////////////////Insertion Logic/////////////////////

        cout << "First Matrix :" << endl;

        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 2; j++) {

                cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
                cin >> m1.twoByTwo[i][j];

            }
        }

        cout << "\n\nSecond Matrix :" << endl;

        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 2; j++) {

                cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
                cin >> m2.twoByTwo[i][j];

            }
        }

        //////////////////Addition Logic/////////////////////


        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 2; j++) {

                m3.twoByTwo[i][j] = m1.twoByTwo[i][j] + m2.twoByTwo[i][j];

            }
        }


        //////////////////Display Logic/////////////////////

        cout << "Result = " << endl;
        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 2; j++) {

                cout << m3.twoByTwo[i][j] << "  ";

            }

            cout << endl;
        }


    } else if (choice _equals_ 2) {

        Matrix m1, m2, m3;


        //////////////////Insertion Logic/////////////////////

        cout << "First Matrix :" << endl;

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
                cin >> m1.threeByThree[i][j];

            }
        }

        cout << "\n\nSecond Matrix :" << endl;

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
                cin >> m2.threeByThree[i][j];

            }
        }

        //////////////////Addition Logic/////////////////////


        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                m3.threeByThree[i][j] = m1.threeByThree[i][j] + m2.threeByThree[i][j];

            }
        }


        //////////////////Display Logic/////////////////////

        cout << "Result = " << endl;
        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 2; j++) {

                cout << m3.threeByThree[i][j] << "  ";

            }

            cout << endl;
        }


    } else if (choice _equals_ 3) {

        int w, h;

        cout << "Enter Matrix Dimensions:" << endl;

        cin >> w >> h;

        Matrix m1(w, h), m2(w, h), m3(w, h);

        //////////////////Insertion Logic/////////////////////

        cout << "First Matrix :" << endl;

        for (int i = 0; i < w; i++) {

            for (int j = 0; j < h; j++) {

                cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
                cin >> m1.genericMatrix[i][j];

            }
        }

        cout << "\n\nSecond Matrix :" << endl;

        for (int i = 0; i < w; i++) {

            for (int j = 0; j < h; j++) {

                cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
                cin >> m2.genericMatrix[i][j];

            }
        }

        //////////////////Addition Logic/////////////////////


        for (int i = 0; i < w; i++) {

            for (int j = 0; j < h; j++) {

                m3.genericMatrix[i][j] = m1.genericMatrix[i][j] + m2.genericMatrix[i][j];

            }
        }


        //////////////////Display Logic/////////////////////

        cout << "Result = " << endl;
        for (int i = 0; i < w; i++) {

            for (int j = 0; j < h; j++) {

                cout << m3.genericMatrix[i][j] << "  ";

            }

            cout << endl;
        }


    }

}

void BasicMatrixOperations::matrixSubraction() {

    short choice;
    cout << "1 - 2x2 Subtraction" << endl;
    cout << "2 - 3x3 Subtraction" << endl;
    cout << "3 - user-defined Subtraction" << endl;
    cout << "Your choice >> " << endl;

    cin >> choice;

    if (choice _equals_ 1) {

        Matrix m1, m2, m3;


        //////////////////Insertion Logic/////////////////////

        cout << "First Matrix :" << endl;

        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 2; j++) {

                cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
                cin >> m1.twoByTwo[i][j];

            }
        }

        cout << "\n\nSecond Matrix :" << endl;

        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 2; j++) {

                cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
                cin >> m2.twoByTwo[i][j];

            }
        }

        //////////////////Addition Logic/////////////////////


        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 2; j++) {

                m3.twoByTwo[i][j] = m1.twoByTwo[i][j] - m2.twoByTwo[i][j];

            }
        }


        //////////////////Display Logic/////////////////////

        cout << "Result = " << endl;
        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 2; j++) {

                cout << m3.twoByTwo[i][j] << "  ";

            }

            cout << endl;
        }




    } else if (choice _equals_ 2) {

        Matrix m1, m2, m3;


        //////////////////Insertion Logic/////////////////////

        cout << "First Matrix :" << endl;

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
                cin >> m1.threeByThree[i][j];

            }
        }

        cout << "\n\nSecond Matrix :" << endl;

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
                cin >> m2.threeByThree[i][j];

            }
        }

        //////////////////Addition Logic/////////////////////


        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                m3.threeByThree[i][j] = m1.threeByThree[i][j] - m2.threeByThree[i][j];

            }
        }


        //////////////////Display Logic/////////////////////

        cout << "Result = " << endl;
        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 2; j++) {

                cout << m3.threeByThree[i][j] << "  ";

            }

            cout << endl;
        }


    } else if (choice _equals_ 3) {

        int w, h;

        cout << "Enter Matrix Dimensions:" << endl;

        cin >> w >> h;

        Matrix m1(w, h), m2(w, h), m3(w, h);

        //////////////////Insertion Logic/////////////////////

        cout << "First Matrix :" << endl;

        for (int i = 0; i < w; i++) {

            for (int j = 0; j < h; j++) {

                cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
                cin >> m1.genericMatrix[i][j];

            }
        }

        cout << "\n\nSecond Matrix :" << endl;

        for (int i = 0; i < w; i++) {

            for (int j = 0; j < h; j++) {

                cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
                cin >> m2.genericMatrix[i][j];

            }
        }

        //////////////////Addition Logic/////////////////////


        for (int i = 0; i < w; i++) {

            for (int j = 0; j < h; j++) {

                m3.genericMatrix[i][j] = m1.genericMatrix[i][j] - m2.genericMatrix[i][j];

            }
        }


        //////////////////Display Logic/////////////////////

        cout << "Result = " << endl;
        for (int i = 0; i < w; i++) {

            for (int j = 0; j < h; j++) {

                cout << m3.genericMatrix[i][j] << "  ";

            }

            cout << endl;
        }


    }

}

void BasicMatrixOperations::matrixMultiplication() {

    int w1, h1, w2, h2, wf, hf;


    cout << "Enter Matrix One Dimensions:" << endl;

    cin >> w1 >> h1;
    Matrix m1(w1, h1);

    cout << "Enter Matrix Twitter Dimensions:" << endl;

    cin >> w2 >> h2;
    Matrix m2(w2, h2);

    wf = w1;
    hf = h2;

    Matrix m3(wf, hf);



    //////////////////Insertion Logic/////////////////////

    cout << "First Matrix :" << endl;

    for (int i = 0; i < w1; i++) {

        for (int j = 0; j < h1; j++) {

            cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
            cin >> m1.genericMatrix[i][j];

        }
    }

    cout << "\n\nSecond Matrix :" << endl;

    for (int i = 0; i < w2; i++) {

        for (int j = 0; j < h2; j++) {

            cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
            cin >> m2.genericMatrix[i][j];

        }
    }

    //////////////////Multiplication Logic/////////////////////



    for (int i = 0; i < w1; ++i)
        for (int j = 0; j < h1; ++j)
            for (int k = 0; k < h1; ++k)
                m3.genericMatrix[i][j] = m1.genericMatrix[i][j] - m2.genericMatrix[i][j];



    //////////////////Display Logic/////////////////////

    cout << "Result = " << endl;
    for (int i = 0; i < wf; i++) {

        for (int j = 0; j < hf; j++) {

            cout << m3.genericMatrix[i][j] << "  ";

        }

        cout << endl;
    }


}

void BasicMatrixOperations::matrixScalarMultiplication() {

    short choice;
    cout << "1 - 2x2 Multiply" << endl;
    cout << "2 - 3x3 Multiply" << endl;
    cout << "3 - user-defined Multiply" << endl;
    cout << "Your choice >> " << endl;

    cin >> choice;


    if (choice _equals_ 1) {

        Matrix m1, m3;

        int scalar;

        cout << "Enter Scalar : ";
        cin >> scalar;

        //////////////////Insertion Logic/////////////////////

        cout << "First Matrix :" << endl;

        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 2; j++) {

                cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
                cin >> m1.twoByTwo[i][j];

            }
        }


        //////////////////Logic/////////////////////


        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 2; j++) {

                m3.twoByTwo[i][j] = m1.twoByTwo[i][j] * scalar;

            }
        }


        //////////////////Display Logic/////////////////////

        cout << "Result = " << endl;
        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 2; j++) {

                cout << m3.twoByTwo[i][j] << "  ";

            }

            cout << endl;
        }




    } else if (choice _equals_ 2) {

        Matrix m1, m3;

        int scalar;

        cout << "Enter Scalar : ";
        cin >> scalar;


        //////////////////Insertion Logic/////////////////////

        cout << "First Matrix :" << endl;

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
                cin >> m1.threeByThree[i][j];

            }
        }


        //////////////////Addition Logic/////////////////////


        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                m3.threeByThree[i][j] = m1.threeByThree[i][j] * scalar;

            }
        }


        //////////////////Display Logic/////////////////////

        cout << "Result = " << endl;
        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 2; j++) {

                cout << m3.threeByThree[i][j] << "  ";

            }

            cout << endl;
        }


    } else if (choice _equals_ 3) {

        int w, h;

        cout << "Enter Matrix Dimensions:" << endl;

        cin >> w >> h;

        Matrix m1(w, h), m3(w, h);

        int scalar;

        cout << "Enter Scalar : ";
        cin >> scalar;

        //////////////////Insertion Logic/////////////////////

        cout << "First Matrix :" << endl;

        for (int i = 0; i < w; i++) {

            for (int j = 0; j < h; j++) {

                cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
                cin >> m1.genericMatrix[i][j];

            }
        }


        //////////////////Addition Logic/////////////////////


        for (int i = 0; i < w; i++) {

            for (int j = 0; j < h; j++) {

                m3.genericMatrix[i][j] = m1.genericMatrix[i][j] * scalar;

            }
        }


        //////////////////Display Logic/////////////////////

        cout << "Result = " << endl;
        for (int i = 0; i < w; i++) {

            for (int j = 0; j < h; j++) {

                cout << m3.genericMatrix[i][j] << "  ";

            }

            cout << endl;
        }


    }

}