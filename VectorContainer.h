#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H

#include "Base.h"
#include "Container.h"
#include <vector>
#include <iostream>

using namespace std;

class VectorContainer : public Container{
    protected:
        Sort* sort_function;
        vector<Base*> elements;
    public:
        VectorContainer() : sort_function(0), elements(0) {}
        VectorContainer(Sort* function) : sort_function(function), elements(0) {}
        void set_sort_function(Sort* sort_function);
        void add_element(Base* element);
        void print();
        void sort();
        void swap(int i, int j);
        int at(int i);
        int size();
};

#endif