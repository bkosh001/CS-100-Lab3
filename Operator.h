#ifndef OPERATOR_H
#define OPERATOR_H

#include "Base.h"

class Operator : public Base {
    protected:
        Base* leftChild;
        Base* rightChild;
};

#endif