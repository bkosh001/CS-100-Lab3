#ifndef ADD_H
#define ADD_H

#include "Base.h"
#include "Operator.h"

class Add : public Operator {
   protected:
      Base* leftChild;
      Base* rightChild;
   public:
      Add();
      Add(Base* left, Base* right); 
      double evaluate();
};

#endif