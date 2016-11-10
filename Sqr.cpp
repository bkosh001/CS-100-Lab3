#include "Base.h"
#include "Sqr.h"

Sqr::Sqr() : child(0) {}

Sqr::Sqr(Base* s) : child(s) {}

double Sqr::evaluate() {
    return child->evaluate() * child->evaluate();
}