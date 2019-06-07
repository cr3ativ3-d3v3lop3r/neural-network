/*
 * Filename: Layer.h
 * Author: Callum Cooper
 * Date: 26-04-19
 * Description: Interface to hold the layer of neurons.
 */

#ifndef LAYER_H_
#define LAYER_H_

#include <iostream>
#include <vector>
#include "Neuron.h"
#include "Matrix.h"

using namespace std;

class Layer
{
    public:
        Layer(int size);

        void setVal(int i, double v);
        Matrix *matrixifyVals();
        Matrix *matrixifyActivatedVals();
        Matrix *matrixifyDerivedVals();

     private:
        int size;
        vector<Neuron *> neurons;
};

#endif

