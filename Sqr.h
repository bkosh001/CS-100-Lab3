#ifndef SQR_H
#define SQR_H

#include "Base.h"

class Sqr : public Base {
    protected:
      Base* child;
   public:
      Sqr();
      Sqr(Base* s); 
      double evaluate();
};

#endif