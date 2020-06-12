/*
 * Filename: Matrix.h
 * Author: Callum Cooper
 * Date: 26-04-19
 * Description: Interface to transpose the layers of neurons.
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include <iostream>
#include <random>
#include <vector>

using namespace std;

class Matrix {
    public:
        Matrix(int numRows, int numCols, bool isRandom);

        Matrix *transpose();
        double generateRandomNumber();

        void setValue(int r, int c, double v) { this->values.at(r).at(c) = v; };
        double getValue(int r, int c) { return this->values.at(r).at(c); };

        void printToConsole();

        int getNumRows() { return this->numRows; };
        int getNumCols() { return this->numCols; };
     private:
        int numRows;
        int numCols;
        vector< vector<double> > values;
};

#endif


