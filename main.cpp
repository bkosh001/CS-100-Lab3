#include <iostream>

#include "Base.h"
#include "Operator.h"
#include "Op.h"
#include "Container.h"
#include "Sort.h"

#include "Add.h"
#include "BubbleSort.h"
#include "Div.h"
#include "ListContainer.h"
#include "Mult.h"
#include "SelectionSort.h"
#include "Sqr.h"
#include "Sub.h"
#include "VectorContainer.h"

using namespace std;

int main() {
    Op* op7 = new Op(7);
    Op* op4 = new Op(4);
    Op* op3 = new Op(3);
    Op* op2 = new Op(2);
    Mult* A = new Mult(op7, op4);
    Add* B = new Add(op3, A);
    Sub* C = new Sub(B, op2);
    Sqr* D = new Sqr(C);
    ListContainer* container = new ListContainer();
    container->add_element(A);
    container->add_element(B);
    container->add_element(C);
    container->add_element(D);
    cout << "Container Before Sort: " << endl;
    container->print();
    cout << "Container After Sort: " << endl;
    // cout << "Set Sort" << endl;
    container->set_sort_function(new SelectionSort());
    // container->set_sort_function(new BubbleSort());
    cout << "Sorting" << endl;
    container->sort();
   // cout << "Print" << endl;
    container->print();

    return 0;
}