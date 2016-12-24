/*
 * Copyright (C) 2016 Mohamed Rashad
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT AY WARRATY; without even the implied warranty of
 * MERCHATABILITY or FITESS FOR A PARTICULAR PURPOSE.  See the
 * GU General Public License for more details.
 *
 * You should have received a copy of the GU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "AdvancedMatrixOperations.h"
#include "Matrix.h"

void AdvancedMatrixOperations::determinant() {

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


    //////////////////Display Logic/////////////////////

    cout << "Result = ";

    cout << determinantOfMatrix(m1.genericMatrix, w) << "  ";

}

void AdvancedMatrixOperations::traspose() {

    int x;

    int w, h;

    cout << "Enter Matrix Dimensions:" << endl;

    cin >> w >> h;

    Matrix m1(w, h), m3(h, w);

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

            m3.genericMatrix[j][i] = m1.genericMatrix[i][j];

        }


        //////////////////Display Logic/////////////////////

        cout << "Result = " << endl;
        for (int i = 0; i < h; i++) {

            for (int j = 0; j < w; j++) {

                cout << m3.genericMatrix[i][j] << "  ";

            }

            cout << endl;
        }



    }

}



/* Recursive function for finding determinant of matrix.
   n is current dimension of mat**. */
int AdvancedMatrixOperations::determinantOfMatrix(int **a, int n) {
  
   int i,j,j1,j2;
   int det = 0;
   int **m = NULL;

   if (n < 1) { /* Error */

       return 0;
       
   } else if (n == 1) { /* Shouldn't get used */
       
      det = a[0][0];
      
   } else if (n == 2) {
       
      det = a[0][0] * a[1][1] - a[1][0] * a[0][1];
      
   } else {
       
      det = 0;
      
      for (j1=0;j1<n;j1++) {
          
         m =  new int*[n-1];
         
         
         for (i=0;i<n-1;i++) m[i] =  new int[n-1];
         
         for (i=1;i<n;i++) {
             
            j2 = 0;
            
            for (j=0;j<n;j++) {
                
               if (j == j1) continue;
               
               m[i-1][j2] = a[i][j];
               
               j2++;
               
            }
            
         }
         
         det += pow(-1.0 , (1.0 + j1 + 1.0)) * a[0][j1] * determinantOfMatrix(m,n-1);
         
         for (i=0;i<n-1;i++) delete m[i];
         
         delete m;
         
      }
   }
   return(det);
}

