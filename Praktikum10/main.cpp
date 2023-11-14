#include <iostream>
#include "Matrix.h"

int main (){

Matrix<int> mat1(3);
  mat1.set(0, 0, 1);
  mat1.set(0, 1, 2);
  mat1.set(0, 2, 3);
  mat1.set(1, 0, 4);
  mat1.set(1, 1, 5);
  mat1.set(1, 2, 6);
  mat1.set(2, 0, 7);
  mat1.set(2, 1, 8);
  mat1.set(2, 2, 9);

  // Create a second 3x3 matrix with integer elements
  Matrix<int> mat2(3);
  mat2.set(0, 0, 1);
  mat2.set(0, 1, 0);
  mat2.set(0, 2, 0);
  mat2.set(1, 0, 0);
  mat2.set(1, 1, 1);
  mat2.set(1, 2, 0);
  mat2.set(2, 0, 0);
  mat2.set(2, 1, 0);
  mat2.set(2, 2, 1);

    // Multiply the two matrices and print the result
  Matrix<int> mat3 = mat1 * mat2;
  std::cout << mat3 << std::endl;

Matrix<int> m(2);
m.set(0,0,1);
m.set(0,1,2);
m.set(1,0,3);
m.set(1,1,4);
std::cout << m << "*" << std::endl << m << "=" << std::endl << m*m;


    return 0;
}