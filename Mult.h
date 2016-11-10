#ifndef MULT_H
#define MULT_H

#include "Base.h"
#include "Operator.h"

class Mult : public Operator {
   protected:
      Base* leftChild;
      Base* rightChild;
   public:
      Mult();
      Mult(Base* Left, Base* Right); 
      double evaluate ();
};
#endif