/*
 * Filename: Neuron.h
 * Author: Callum Cooper
 * Date: 07-06-19
 * Description: The interface definition for the networks neuron.
 */

#ifndef NEURON_H_
#define NEURON_H_

#include <iostream>
#include <math.h>

using namespace std;

class Neuron
{
    public:
        Neuron(double val);

        void setVal(double val);

        // Fast Sigmoid Function
        // f(x) = x / (1 + |x|)
        void activate();

        // Derivative for fast sigmoid function
        // f'(x) = f(x) * (1 - f(x))
        void derivative();

        // Getter
        double getVal() { return this->val; };
        double getActivatedVal() { return this->activatedVal; };
        double getDerivedVal() { return this->derivedVal; };

    private:
        double val;
        double activatedVal;
        double derivedVal;
};

#endif
