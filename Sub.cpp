#include "Base.h"
#include "Operator.h"
#include "Sub.h"

Sub::Sub() : leftChild(0), rightChild(0) {}

Sub::Sub(Base* left, Base* right) : leftChild(left), rightChild(right) {}

double Sub::evaluate() {
        return leftChild->evaluate() - rightChild->evaluate();
}