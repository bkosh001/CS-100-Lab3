#include "Base.h"
#include "Operator.h"
#include "Mult.h"

Mult::Mult() : leftChild(0), rightChild(0) {}

Mult::Mult(Base* left, Base* right) : leftChild(left), rightChild(right) {}

double Mult::evaluate() {
    return leftChild->evaluate() * rightChild->evaluate();
}