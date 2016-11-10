#ifndef SUB_H
#define SUB_H

#include "Base.h"
#include "Operator.h"

class Sub : public Operator {
   protected:
      Base* leftChild;
      Base* rightChild;
   public:
      Sub();
      Sub(Base* Left, Base* Right); 
      double evaluate ();
};

#endif