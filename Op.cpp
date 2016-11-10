#include "Base.h"
#include "Op.h"

Op::Op() : val(0.0) {}

Op::Op(double v) : val(v) {}

double Op::evaluate() {
    return val;
}