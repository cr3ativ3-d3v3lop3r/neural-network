/*
 * Filename: NeuralNetwork.cpp
 * Author: Callum Cooper
 * Date: 26-04-19
 * Description: Implementation to hold the neural network.
 */

#include "../include/NeuralNetwork.h"

NeuralNetwork::NeuralNetwork(vector<int> topology)
{
    this->topology = topology;
    this->topologySize = topology.size();

    for(int i = 0; i < this->topologySize; i++)
    {
        Layer *l = new Layer(topology.at(i));
        this->layers.push_back(l);
    }

    for(int i = 0; i < (this->topologySize - 1); i++)
    {
        Matrix *m = new Matrix(topology.at(i), topology.at(i + 1), true);
        this->weightMatrices.push_back(m);
    }
}

void NeuralNetwork::setCurrentInput(vector<double> input) {
    this->input = input;

    for(unsigned long i = 0; i < input.size(); i++) {
        this->layers.at(0)->setVal(i, input.at(i));
    }
}

void NeuralNetwork::printToConsole() {
    for(unsigned long i = 0; i < this->layers.size(); i++) {
        cout << "LAYER: " << i << endl;
        if(i == 0) {
           Matrix *m = this->layers.at(i)->matrixifyVals();
           m->printToConsole();
        }
        else {
            Matrix *m = this->layers.at(i)->matrixifyActivatedVals();
            m->printToConsole();
        }
    }
}

