//
// Created by mariussolomes on 02/07/19.
//

#ifndef BELA_MATRIX_LIBRARY_H
#define BELA_MATRIX_LIBRARY_H

#include <iostream>
#include <complex>
#include <vector>

#define EPS             2.220446049250313e-16
/*
This matrix class is for now only able to hold double*...
TODO: make this take a template <typename T>.
*/

class Matrix{
public:
    Matrix(int n_rows, int n_cols);
    // ~Matrix() = default;

    void print();

    int rows, cols;
    std::vector<double> data;

private:
    void initMatrix();
};

/* Matrix functions */

Matrix matrixAddition(Matrix* m1, Matrix* m2);
Matrix matrixTranspose(Matrix* m);
Matrix matrixDotProduct(Matrix* m1, Matrix* m2);
Matrix duplicateMatrix(Matrix* m);
Matrix append1DMatrices(Matrix* m1, Matrix* m2);
Matrix arrange(int n_rows, int n_cols, double start, double end, double increment);
Matrix lookupByPosition(Matrix* m, Matrix* position);
Matrix matrixReplaceZeros(Matrix* m);
void saveMatrix(Matrix* m);

/**
 * FEATURE-02/FIXING NORMALISER
 */
Matrix matrixElementsUpto(Matrix* m, int position);
#endif //BELA_MATRIX_LIBRARY_H
