#ifndef DIV_H
#define DIV_H

#include "Base.h"
#include "Operator.h"

class Div : public Operator {
   protected:
      Base* leftChild;
      Base* rightChild;
   public:
      Div();
      Div(Base*, Base*);
      double evaluate ();
};

#endif