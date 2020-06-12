/*
 * Filename: Neuron.cpp
 * Author: Callum Cooper
 * Date: 07-06-19
 * Description: The implementation of the networks neuron.
 */

#include "../include/Neuron.h"

Neuron::Neuron(double val) {
    this->val = val;
    activate();
    derivative();
}

void Neuron::setVal(double val) {
    this->val = val;
    activate();
    derivative();
}


// Fast Sigmoid Function
// f(x) = x / (1 + |x|)
void Neuron::activate() {
    this->activatedVal = this->val / (1 + abs(this->val));
}

 // Derivative for fast sigmoid function
// f'(x) = f(x) * (1 - f(x))
void Neuron::derivative() {
    this->derivedVal = this->activatedVal * (1 - this->activatedVal);
}
