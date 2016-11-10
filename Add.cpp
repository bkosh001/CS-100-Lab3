#include "Base.h"
#include "Operator.h"
#include "Add.h"

Add::Add() : leftChild(0), rightChild(0) {}

Add::Add(Base* left, Base* right) : leftChild(left), rightChild(right) {}

double Add::evaluate() {
    return leftChild->evaluate() + rightChild->evaluate();
}