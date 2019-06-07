/*
 * Filename: Main.cpp
 * Author: Callum Cooper
 * Date: 26-04-19
 * Description: Entry point to the application.
 */

#include <iostream>
#include <vector>

#include "../include/Neuron.h"
#include "../include/Matrix.h"
#include "../include/NeuralNetwork.h"

using namespace std;

int main(void)
{
    vector<int> topology;
    topology.push_back(3);
    topology.push_back(2);
    topology.push_back(3);

    vector<double> input;
    input.push_back(1.0);
    input.push_back(0.0);
    input.push_back(1.0);

    NeuralNetwork *nn = new NeuralNetwork(topology);
    nn->setCurrentInput(input);
    nn->printToConsole();

    cin.ignore(0);

    return 0;
}
