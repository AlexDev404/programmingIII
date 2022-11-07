#include "shape.h"

#include <iostream>

using namespace std;

void Shape::printBasic(int rows, int cols, char symbol) {
   for (int r = 1; r <= rows; r++) {

      for (int c = 1; c <= cols; c++) {

         cout << symbol << " ";
      }

      cout << endl;
   }
}

void Shape::printOutline(int rows, int cols, char symbol, char border) {
   for (int r = 1; r <= rows; r++) {

      for (int c = 1; c <= cols; c++) {

         if (c == 1 || c == cols) {

            cout << border << " ";

         } else

            cout << symbol << " ";
      }

      cout << endl;
   }
}

void Shape::printRect(int width, char symbol) {
   int r;
   int c;
   for (r = 1; r <= width; r++) {

      for (c = 1; c <= width; c++) {
         if (r == 1 || r == width || c == 1 || c == width) {
            cout << symbol;
         } else {
            cout << " ";
         }
      }

      cout << endl;
   }
}


void Shape::printTriangle(int width, char16_t symbol, bool inv) {

    if (inv){
        // Inverse
        for (int l = width; l >= 1; l--) {
           for (int w = l; w >= 1; w--) {
              cout << symbol << " ";
           }
           cout << endl;
        }
    } else {
        // Default
        for (int l = 1; l <= width; l++) {
          for (int w = 1; w <= l; w++) {
             cout << symbol << " ";
          }
          cout << endl;
       }

    }
}

//void Shape::printTriangleInverse(int width, char symbol) {
//   for (int l = width; l >= 1; l--) {
//      for (int w = l; w >= 1; w--) {
//         cout << symbol << " ";
//      }
//      cout << endl;
//   }
//}


