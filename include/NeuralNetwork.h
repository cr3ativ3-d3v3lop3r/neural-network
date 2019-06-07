/*
 * Filename: NeuralNetwork.h
 * Author: Callum Cooper
 * Date: 26-04-19
 * Description: Interface to hold the neural network.
 */

#ifndef NEURAL_NETWORK_H_
#define NEURAL_NETWORK_H_

#include <iostream>
#include "Matrix.h"
#include "Layer.h"
#include <vector>

using namespace std;

class NeuralNetwork
{
    public:
        NeuralNetwork(vector<int> topology);

        void setCurrentInput(vector<double> input);
        void printToConsole();

    private:
        int                 topologySize;
        vector<int>         topology;
        vector<Layer *>     layers;
        vector<Matrix *>    weightMatrices;
        vector<double>      input;
};

#endif


