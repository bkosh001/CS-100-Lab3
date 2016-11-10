#include "Base.h"
#include "Operator.h"
#include "Div.h"

Div::Div() : leftChild(0), rightChild(0) {}

Div::Div(Base* left, Base* right) : leftChild(left), rightChild(right) {}

double Div::evaluate() {
    return leftChild->evaluate() / rightChild->evaluate();
}